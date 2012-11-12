/**
 * Mupen64 - tlb.c
 * Copyright (C) 2002 Hacktarux
 *
 * Mupen64 homepage: http://mupen64.emulation64.com
 * email address: hacktarux@yahoo.fr
 * 
 * If you want to contribute to the project please contact
 * me first (maybe someone is already making what you are
 * planning to do).
 *
 *
 * This program is free software; you can redistribute it and/
 * or modify it under the terms of the GNU General Public Li-
 * cence as published by the Free Software Foundation; either
 * version 2 of the Licence, or any later version.
 *
 * This program is distributed in the hope that it will be use-
 * ful, but WITHOUT ANY WARRANTY; without even the implied war-
 * ranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public Licence for more details.
 *
 * You should have received a copy of the GNU General Public
 * Licence along with this program; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139,
 * USA.
 *
**/

#include "memory.h"
#include "../r4300/r4300.h"
#include "../r4300/exception.h"
#include "../r4300/macros.h"
#include "TLB-Cache.h"
#ifdef USE_EXPANSION
	#define MEMMASK 0x7FFFFF
	#define TOPOFMEM 0x80800000
#else
	#define MEMMASK 0x3FFFFF
	#define TOPOFMEM 0x80400000
#endif

unsigned long rom_base_in_tlb = 0;

#ifndef USE_TLB_CACHE
#include "MEM2.h"
unsigned long *tlb_LUT_r = (unsigned long*)(TLBLUT_LO);
unsigned long *tlb_LUT_w = (unsigned long*)(TLBLUT_LO+0x400000);

void tlb_mem2_init()
{
	long i;
	for(i = 0; i<(0x400000/4); i++)
	{	
		tlb_LUT_r[i] = 0;
		tlb_LUT_w[i] = 0;
	}
}
#endif

unsigned long virtual_to_physical_address(unsigned long addresse, int w)
{
	if(rom_base_in_tlb && (addresse >= 0x7f000000 && addresse < 0x80000000)) {
		return rom_base_in_tlb + (addresse & 0x7FFFFF);	// GoldenEye Hack
	}
#ifdef USE_TLB_CACHE
	unsigned long paddr = w==1 ? TLBCache_get_w(addresse>>12) : TLBCache_get_r(addresse>>12);
#else
	unsigned long paddr = w==1 ? tlb_LUT_w[addresse>>12] : tlb_LUT_r[addresse>>12];
#endif
	if(paddr)
		return (paddr&0xFFFFF000)|(addresse&0xFFF);

	// Make the game take a TLB Exception
	TLB_refill_exception(addresse,w);
	return 0x00000000;
}

int probe_nop(unsigned long address)
{
	unsigned long a;
	if (address < 0x80000000 || address > 0xc0000000) {	// Virtual, get Physical
#ifdef USE_TLB_CACHE
		unsigned long paddr = TLBCache_get_r(address>>12);
#else
		unsigned long paddr = tlb_LUT_r[address>>12];
#endif
		if(paddr)
			a = (paddr&0xFFFFF000)|(address&0xFFF);
		else
			return 0;
	}
	else
		a = address;	// Physical

	if (a >= 0xa4000000 && a < 0xa4001000)		// Boot/RSP
		return !SP_DMEM[(a&0xFFF)/4];

	else if (a >= 0x80000000 && a < TOPOFMEM)	// RDRAM
		return !rdram[(a&MEMMASK)/4];

	return 0;
}
