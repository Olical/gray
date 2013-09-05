#include <gray/helpers.h>

unsigned int gray_encode(unsigned int c)
{
	return (c >> 1) ^ c;
}

unsigned int gray_decode(unsigned int c)
{
	unsigned int mask;

	for (mask = c >> 1; mask != 0; mask >>= 1) {
		c ^= mask;
	}

	return c;
}
