//this is courtesy of linux cactus/shagkur/libogc and all that is good :)
// Supports:
//          Offset patching //0x32
//          AudioFix
//          One less reset (if done properly)
//          DRE Retry
//          Originals(duh? if disabled!)
//          DVD +/-R Media

// Added to GCoS by emu_kidid
// Added to Swiss by emu_kidid 2013.

#ifndef _DRIVECODES_H_
#define _DRIVECODES_H_

static const char Drive04[] =
{
	0xf4,0xe1,0xa5,0x38,0xc7,0xdc,0x00,0x80,0xf4,0x71,0x2a,0xea,
	0x08,0x80,0x6e,0xf4,0xe1,0x13,0x5f,0xc7,0xdc,0x6e,0x80,0xa0,
	0xf9,0xb8,0x01,0xf4,0xe1,0x29,0x5f,0xc7,0xf4,0x74,0x47,0xd0,
	0x40,0xf7,0x20,0x4c,0x80,0xf4,0x74,0xd6,0x9c,0x08,0xf7,0x20,
	0xd6,0xfc,0xf4,0x74,0x28,0xae,0x08,0xf7,0x20,0xd2,0xfc,0x80,
	0x04,0xc4,0xda,0xfc,0xf4,0x74,0x7e,0xd4,0x08,0xf0,0x00,0xc8,
	0xda,0xfc,0xf5,0x00,0x01,0xe8,0x03,0xfc,0xbf,0x00,0xa0,0xf4,
	0x74,0x09,0xec,0x40,0x10,0xc8,0xda,0xfc,0xf5,0x00,0x02,0xe8,
	0x03,0xfc,0x3b,0x01,0xf4,0x74,0xf9,0xec,0x40,0x80,0x02,0xf0,
	0x20,0xc8,0x84,0x80,0xc0,0x9c,0x81,0xdc,0xb4,0x80,0xf5,0x30,
	0x00,0xf4,0x44,0xd5,0xd1,0x40,0xf8,0xaa,0x00,0x10,0xf4,0xd0,
	0xd0,0xd1,0x40,0xf0,0x01,0xdc,0xb4,0x80,0xf5,0x30,0x00,0xf7,
	0x48,0xaa,0x00,0xe9,0x07,0xf4,0xc4,0xd5,0xd1,0x40,0x10,0xfe,
	0xd8,0x32,0xe8,0x1d,0xf7,0x48,0xa8,0x00,0xe8,0x26,0xf7,0x48,
	0xab,0x00,0xe8,0x20,0xf7,0x48,0xe1,0x00,0xe8,0x1a,0xf7,0x48,
	0xee,0x00,0xe8,0x3b,0xd8,0x55,0xe8,0x2f,0xfe,0x71,0x04,0xfd,
	0x20,0x00,0xf4,0x51,0xe0,0xd1,0x40,0xa0,0xf5,0x10,0x00,0xfe,
	0xf2,0xf9,0xf4,0xd2,0xe0,0xd1,0x40,0x71,0x04,0xfd,0x0a,0x00,
	0xf2,0x49,0xfd,0x05,0x00,0x51,0x04,0xf2,0x36,0xfe,0xf7,0x21,
	0xbc,0xff,0xf7,0x31,0xbc,0xff,0xfe,0xcc,0xb5,0x80,0xfd,0x53,
	0x00,0xea,0x0c,0xcc,0xb5,0x80,0xc4,0xb0,0x81,0xcc,0xb6,0x80,
	0xc4,0x94,0x81,0xdc,0xb4,0x80,0xf8,0xe0,0x00,0x10,0xa0,0xf5,
	0x10,0x01,0xf5,0x10,0x02,0xf5,0x10,0x03,0xfe,0xcc,0xda,0xfc,
	0xf7,0x00,0xfe,0xff,0xc4,0xda,0xfc,0xcc,0x44,0xfc,0xf7,0x00,
	0xfe,0xff,0xc4,0x44,0xfc,0xf2,0x7c,0xd0,0x04,0xcc,0x5b,0x80,
	0xd8,0x01,0xe9,0x02,0x7c,0x04,0xf4,0x75,0x60,0xd1,0x40,0x51,
	0x20,0x71,0x34,0xf4,0x7d,0xc1,0x85,0x08,0xe9,0x19,0x80,0x00,
	0xcd,0xda,0xfc,0xf7,0x01,0xf7,0xff,0xd8,0x00,0xe8,0x03,0xf5,
	0x09,0x08,0xc5,0xda,0xfc,0xf4,0x75,0xd4,0xd1,0x40,0x14,0xfe,
	0x80,0x01,0xea,0xe4,0xf7,0x10,0xff,0xf7,0x21,0xf7,0x49,0x08,
	0x06,0xe9,0x05,0x85,0x02,0xf5,0x11,0x01,0x21,0xf4,0x79,0x00,
	0xf0,0x00,0xe9,0x0e,0x80,0x00,0xf4,0xc9,0xd4,0xd1,0x40,0xd9,
	0x00,0xe8,0x03,0xf5,0x10,0x09,0x21,0xd9,0x06,0xe9,0x0f,0x61,
	0x06,0xf4,0xc8,0xd4,0xd1,0x40,0xd8,0x00,0xe8,0x02,0xd5,0x06,
	0x41,0x06,0xf4,0xe0,0x94,0xdc,0xc7,0xcc,0xda,0xfc,0xf7,0x00,
	0xfd,0xff,0xc4,0xda,0xfc,0xcc,0x44,0xfc,0xf7,0x00,0xfe,0xff,
	0xc4,0x44,0xfc,0xf2,0x7c,0xd0,0x04,0xcc,0x5b,0x80,0xd8,0x01,
	0xe9,0x02,0x7c,0x04,0xf4,0x75,0xc8,0xd1,0x40,0x51,0x20,0xfe,
	0xf4,0xe0,0x81,0xcb,0xc7,0x00,0x00,0x00,0x74,0x0a,0x08,0x00,
	0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00
};
static const char DriveQ[] =
{
	0xf4,0xe1,0xa5,0x38,0xc7,0xdc,0x00,0x80,0xf4,0x71,0xf6,0xeb,
	0x08,0x80,0x6e,0xf4,0xe1,0x66,0x5f,0xc7,0xdc,0x6e,0x80,0xa0,
	0xf9,0xae,0x01,0xf4,0xe1,0x7c,0x5f,0xc7,0xf4,0x74,0x47,0xd0,
	0x40,0xf7,0x20,0x4c,0x80,0xf4,0x74,0x39,0x9e,0x08,0xf7,0x20,
	0xd6,0xfc,0xf4,0x74,0x02,0xb3,0x08,0xf7,0x20,0xd2,0xfc,0x80,
	0x04,0xc4,0xda,0xfc,0xf4,0x74,0x40,0xd6,0x08,0xf0,0x00,0xc8,
	0xda,0xfc,0xf5,0x00,0x01,0xe8,0x03,0xfc,0xbf,0x00,0xa0,0xf4,
	0x74,0x09,0xec,0x40,0x10,0xc8,0xda,0xfc,0xf5,0x00,0x02,0xe8,
	0x03,0xfc,0x3b,0x01,0xf4,0x74,0x02,0xed,0x40,0x80,0x02,0xf0,
	0x20,0xc8,0x78,0x80,0xc0,0x92,0x81,0xdc,0xaa,0x80,0xf5,0x30,
	0x00,0xf4,0x44,0xd5,0xd1,0x40,0xf8,0xaa,0x00,0x10,0xf4,0xd0,
	0xd0,0xd1,0x40,0xf0,0x01,0xdc,0xaa,0x80,0xf5,0x30,0x00,0xf7,
	0x48,0xaa,0x00,0xe9,0x07,0xf4,0xc4,0xd5,0xd1,0x40,0x10,0xfe,
	0xd8,0x32,0xe8,0x1d,0xf7,0x48,0xa8,0x00,0xe8,0x26,0xf7,0x48,
	0xab,0x00,0xe8,0x20,0xf7,0x48,0xe1,0x00,0xe8,0x1a,0xf7,0x48,
	0xee,0x00,0xe8,0x3b,0xd8,0x55,0xe8,0x2f,0xfe,0x71,0x04,0xfd,
	0x20,0x00,0xf4,0x51,0xe0,0xd1,0x40,0xa0,0xf5,0x10,0x00,0xfe,
	0xf2,0xf9,0xf4,0xd2,0xe0,0xd1,0x40,0x71,0x04,0xfd,0x0a,0x00,
	0xf2,0x49,0xfd,0x05,0x00,0x51,0x04,0xf2,0x36,0xfe,0xf7,0x21,
	0xbc,0xff,0xf7,0x31,0xbc,0xff,0xfe,0xcc,0xab,0x80,0xfd,0x53,
	0x00,0xea,0x0c,0xcc,0xab,0x80,0xc4,0xa6,0x81,0xcc,0xac,0x80,
	0xc4,0x8a,0x81,0xdc,0xaa,0x80,0xf8,0xe0,0x00,0x10,0xa0,0xf5,
	0x10,0x01,0xf5,0x10,0x02,0xf5,0x10,0x03,0xfe,0xcc,0xda,0xfc,
	0xf7,0x00,0xfe,0xff,0xc4,0xda,0xfc,0xcc,0x44,0xfc,0xf7,0x00,
	0xfe,0xff,0xc4,0x44,0xfc,0xf2,0x7c,0xd0,0x04,0xcc,0x5b,0x80,
	0xd8,0x01,0xe9,0x02,0x7c,0x04,0xf4,0x75,0x60,0xd1,0x40,0x51,
	0x20,0x71,0x34,0xf4,0x7d,0x7f,0x86,0x08,0xe9,0x19,0x80,0x00,
	0xcd,0xda,0xfc,0xf7,0x01,0xf7,0xff,0xd8,0x00,0xe8,0x03,0xf5,
	0x09,0x08,0xc5,0xda,0xfc,0xf4,0x75,0xd4,0xd1,0x40,0x14,0xfe,
	0x80,0x01,0xea,0xe4,0xf7,0x10,0xff,0xf7,0x21,0xf7,0x49,0x08,
	0x06,0xe9,0x05,0x85,0x02,0xf5,0x11,0x01,0x21,0xf4,0x79,0x00,
	0xf0,0x00,0xe9,0x0e,0x80,0x00,0xf4,0xc9,0xd4,0xd1,0x40,0xd9,
	0x00,0xe8,0x03,0xf5,0x10,0x09,0x21,0xd9,0x06,0xe9,0x0f,0x61,
	0x06,0xf4,0xc8,0xd4,0xd1,0x40,0xd8,0x00,0xe8,0x02,0xd5,0x06,
	0x41,0x06,0xf4,0xe0,0x6e,0xe1,0xc7,0xcc,0xda,0xfc,0xf7,0x00,
	0xfd,0xff,0xc4,0xda,0xfc,0xcc,0x44,0xfc,0xf7,0x00,0xfe,0xff,
	0xc4,0x44,0xfc,0xf2,0x7c,0xd0,0x04,0xcc,0x5b,0x80,0xd8,0x01,
	0xe9,0x02,0x7c,0x04,0xf4,0x75,0xc8,0xd1,0x40,0x51,0x20,0xfe,
	0xf4,0xe0,0xb7,0xcd,0xc7,0x00,0x00,0x00,0xa4,0x0a,0x08,0x00,
	0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00
};

static const char Drive06[] =
{
	0xf4,0xe1,0xa5,0x38,0xc7,0xdc,0x00,0x80,0xf4,0x71,0xc8,0xe9,
	0x08,0x80,0x6e,0xf4,0xe1,0x1a,0x5f,0xc7,0xdc,0x6e,0x80,0xa0,
	0xf9,0xac,0x01,0xf4,0xe1,0x30,0x5f,0xc7,0xf4,0x74,0x47,0xd0,
	0x40,0xf7,0x20,0x4c,0x80,0xf4,0x74,0x42,0x9d,0x08,0xf7,0x20,
	0xd6,0xfc,0xf4,0x74,0x45,0xb1,0x08,0xf7,0x20,0xd2,0xfc,0x80,
	0x04,0xc4,0xda,0xfc,0xf4,0x74,0x1e,0xd4,0x08,0xf0,0x00,0xc8,
	0xda,0xfc,0xf5,0x00,0x01,0xe8,0x03,0xfc,0xbf,0x00,0xa0,0xf4,
	0x74,0x09,0xec,0x40,0x10,0xc8,0xda,0xfc,0xf5,0x00,0x02,0xe8,
	0x03,0xfc,0x3b,0x01,0xf4,0x74,0x02,0xed,0x40,0x80,0x02,0xf0,
	0x20,0xc8,0x78,0x80,0xc0,0x90,0x81,0xdc,0xa8,0x80,0xf5,0x30,
	0x00,0xf4,0x44,0xd5,0xd1,0x40,0xf8,0xaa,0x00,0x10,0xf4,0xd0,
	0xd0,0xd1,0x40,0xf0,0x01,0xdc,0xa8,0x80,0xf5,0x30,0x00,0xf7,
	0x48,0xaa,0x00,0xe9,0x07,0xf4,0xc4,0xd5,0xd1,0x40,0x10,0xfe,
	0xd8,0x32,0xe8,0x1d,0xf7,0x48,0xa8,0x00,0xe8,0x26,0xf7,0x48,
	0xab,0x00,0xe8,0x20,0xf7,0x48,0xe1,0x00,0xe8,0x1a,0xf7,0x48,
	0xee,0x00,0xe8,0x3b,0xd8,0x55,0xe8,0x2f,0xfe,0x71,0x04,0xfd,
	0x20,0x00,0xf4,0x51,0xe0,0xd1,0x40,0xa0,0xf5,0x10,0x00,0xfe,
	0xf2,0xf9,0xf4,0xd2,0xe0,0xd1,0x40,0x71,0x04,0xfd,0x0a,0x00,
	0xf2,0x49,0xfd,0x05,0x00,0x51,0x04,0xf2,0x36,0xfe,0xf7,0x21,
	0xbc,0xff,0xf7,0x31,0xbc,0xff,0xfe,0xcc,0xa9,0x80,0xfd,0x53,
	0x00,0xea,0x0c,0xcc,0xa9,0x80,0xc4,0xa4,0x81,0xcc,0xaa,0x80,
	0xc4,0x88,0x81,0xdc,0xa8,0x80,0xf8,0xe0,0x00,0x10,0xa0,0xf5,
	0x10,0x01,0xf5,0x10,0x02,0xf5,0x10,0x03,0xfe,0xcc,0xda,0xfc,
	0xf7,0x00,0xfe,0xff,0xc4,0xda,0xfc,0xcc,0x44,0xfc,0xf7,0x00,
	0xfe,0xff,0xc4,0x44,0xfc,0xf2,0x7c,0xd0,0x04,0xcc,0x5b,0x80,
	0xd8,0x01,0xe9,0x02,0x7c,0x04,0xf4,0x75,0x60,0xd1,0x40,0x51,
	0x20,0x71,0x34,0xf4,0x7d,0xb9,0x85,0x08,0xe9,0x19,0x80,0x00,
	0xcd,0xda,0xfc,0xf7,0x01,0xf7,0xff,0xd8,0x00,0xe8,0x03,0xf5,
	0x09,0x08,0xc5,0xda,0xfc,0xf4,0x75,0xd4,0xd1,0x40,0x14,0xfe,
	0x80,0x01,0xea,0xe4,0xf7,0x10,0xff,0xf7,0x21,0xf7,0x49,0x08,
	0x06,0xe9,0x05,0x85,0x02,0xf5,0x11,0x01,0x21,0xf4,0x79,0x00,
	0xf0,0x00,0xe9,0x0e,0x80,0x00,0xf4,0xc9,0xd4,0xd1,0x40,0xd9,
	0x00,0xe8,0x03,0xf5,0x10,0x09,0x21,0xd9,0x06,0xe9,0x0f,0x61,
	0x06,0xf4,0xc8,0xd4,0xd1,0x40,0xd8,0x00,0xe8,0x02,0xd5,0x06,
	0x41,0x06,0xf4,0xe0,0xb1,0xdf,0xc7,0xcc,0xda,0xfc,0xf7,0x00,
	0xfd,0xff,0xc4,0xda,0xfc,0xcc,0x44,0xfc,0xf7,0x00,0xfe,0xff,
	0xc4,0x44,0xfc,0xf2,0x7c,0xd0,0x04,0xcc,0x5b,0x80,0xd8,0x01,
	0xe9,0x02,0x7c,0x04,0xf4,0x75,0xc8,0xd1,0x40,0x51,0x20,0xfe,
	0xf4,0xe0,0x03,0xcc,0xc7,0x00,0x00,0x00,0x74,0x0a,0x08,0x00,
	0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00
};
static const char Drive08[] =
{
	0xf4,0xe1,0xa5,0x38,0xc7,0xdc,0x00,0x80,0xf4,0x71,0x7c,0xea,
	0x08,0x80,0x6e,0xf4,0xe1,0x13,0x5f,0xc7,0xdc,0x6e,0x80,0xa0,
	0xf9,0xb6,0x01,0xf4,0xe1,0x29,0x5f,0xc7,0xf4,0x74,0x47,0xd0,
	0x40,0xf7,0x20,0x4c,0x80,0xf4,0x74,0x32,0x9d,0x08,0xf7,0x20,
	0xd6,0xfc,0xf4,0x74,0x75,0xae,0x08,0xf7,0x20,0xd2,0xfc,0x80,
	0x04,0xc4,0xda,0xfc,0xf4,0x74,0xd9,0xd4,0x08,0xf0,0x00,0xc8,
	0xda,0xfc,0xf5,0x00,0x01,0xe8,0x03,0xfc,0xbf,0x00,0xa0,0xf4,
	0x74,0x09,0xec,0x40,0x10,0xc8,0xda,0xfc,0xf5,0x00,0x02,0xe8,
	0x03,0xfc,0x3b,0x01,0xf4,0x74,0xf5,0xec,0x40,0x80,0x02,0xf0,
	0x20,0xc8,0x80,0x80,0xc0,0x98,0x81,0xdc,0xb0,0x80,0xf5,0x30,
	0x00,0xf4,0x44,0xd5,0xd1,0x40,0xf8,0xaa,0x00,0x10,0xf4,0xd0,
	0xd0,0xd1,0x40,0xf0,0x01,0xdc,0xb0,0x80,0xf5,0x30,0x00,0xf7,
	0x48,0xaa,0x00,0xe9,0x07,0xf4,0xc4,0xd5,0xd1,0x40,0x10,0xfe,
	0xd8,0x32,0xe8,0x1d,0xf7,0x48,0xa8,0x00,0xe8,0x26,0xf7,0x48,
	0xab,0x00,0xe8,0x20,0xf7,0x48,0xe1,0x00,0xe8,0x1a,0xf7,0x48,
	0xee,0x00,0xe8,0x3b,0xd8,0x55,0xe8,0x2f,0xfe,0x71,0x04,0xfd,
	0x20,0x00,0xf4,0x51,0xe0,0xd1,0x40,0xa0,0xf5,0x10,0x00,0xfe,
	0xf2,0xf9,0xf4,0xd2,0xe0,0xd1,0x40,0x71,0x04,0xfd,0x0a,0x00,
	0xf2,0x49,0xfd,0x05,0x00,0x51,0x04,0xf2,0x36,0xfe,0xf7,0x21,
	0xbc,0xff,0xf7,0x31,0xbc,0xff,0xfe,0xcc,0xb1,0x80,0xfd,0x53,
	0x00,0xea,0x0c,0xcc,0xb1,0x80,0xc4,0xac,0x81,0xcc,0xb2,0x80,
	0xc4,0x90,0x81,0xdc,0xb0,0x80,0xf8,0xe0,0x00,0x10,0xa0,0xf5,
	0x10,0x01,0xf5,0x10,0x02,0xf5,0x10,0x03,0xfe,0xcc,0xda,0xfc,
	0xf7,0x00,0xfe,0xff,0xc4,0xda,0xfc,0xcc,0x44,0xfc,0xf7,0x00,
	0xfe,0xff,0xc4,0x44,0xfc,0xf2,0x7c,0xd0,0x04,0xcc,0x5b,0x80,
	0xd8,0x01,0xe9,0x02,0x7c,0x04,0xf4,0x75,0x60,0xd1,0x40,0x51,
	0x20,0x71,0x34,0xf4,0x7d,0xc1,0x85,0x08,0xe9,0x19,0x80,0x00,
	0xcd,0xda,0xfc,0xf7,0x01,0xf7,0xff,0xd8,0x00,0xe8,0x03,0xf5,
	0x09,0x08,0xc5,0xda,0xfc,0xf4,0x75,0xd4,0xd1,0x40,0x14,0xfe,
	0x80,0x01,0xea,0xe4,0xf7,0x10,0xff,0xf7,0x21,0xf7,0x49,0x08,
	0x06,0xe9,0x05,0x85,0x02,0xf5,0x11,0x01,0x21,0xf4,0x79,0x00,
	0xf0,0x00,0xe9,0x0e,0x80,0x00,0xf4,0xc9,0xd4,0xd1,0x40,0xd9,
	0x00,0xe8,0x03,0xf5,0x10,0x09,0x21,0xd9,0x06,0xe9,0x0f,0x61,
	0x06,0xf4,0xc8,0xd4,0xd1,0x40,0xd8,0x00,0xe8,0x02,0xd5,0x06,
	0x41,0x06,0xf4,0xe0,0xe1,0xdc,0xc7,0xcc,0xda,0xfc,0xf7,0x00,
	0xfd,0xff,0xc4,0xda,0xfc,0xcc,0x44,0xfc,0xf7,0x00,0xfe,0xff,
	0xc4,0x44,0xfc,0xf2,0x7c,0xd0,0x04,0xcc,0x5b,0x80,0xd8,0x01,
	0xe9,0x02,0x7c,0x04,0xf4,0x75,0xc8,0xd1,0x40,0x51,0x20,0xfe,
	0xf4,0xe0,0xda,0xcb,0xc7,0x00,0x00,0x00,0x74,0x0a,0x08,0x00,
	0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00
};

#endif
