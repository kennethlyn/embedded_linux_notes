#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


typedef union(
	uint16_t rgb;
	struct(
		uint16_t b : 5;
		uint16_t g : 6;
		uint16_t r : 5;
	)colors;
)Color;
int main(int argc, char *argv[])
{
	uint8_t r = 0xFF;
	uint8_t g = 0xCC;
	uint8_t b = 0x99;
	uint16_t rgb = 0;

	rgb = ((r & 0xF8) << 8) | 
			((g & 0xFC) << 3) | 
			(b >> 3);

	fprintf(stdout, "%04X\n", rgb);

	return EXIT_SUCCESS;
}

