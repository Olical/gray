#include <stdio.h>
#include <string.h>

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

int main()
{
	char input[] = "Hello, World!";
	int length = strlen(input);
	char output[length];
	char reverse[length];
	int i;

	printf("Input is: \"%s\".\n", input);
	printf("Input contains %i bytes.\n", length);

	for (i = 0; i < length; i++) {
		output[i] = gray_encode(input[i]);
	}

	printf("Output is: \"%s\".\n", output);
	printf("Now back the other way!\n");

	for (i = 0; i < length; i++) {
		reverse[i] = gray_decode(output[i]);
	}

	printf("Reversed output is: \"%s\".\n", reverse);

	return 0;
}
