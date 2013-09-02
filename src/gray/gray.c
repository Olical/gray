#include <stdio.h>
#include <string.h>

char binary_to_gray(char *c)
{
	return (*c >> 1) ^ *c;
}

char gray_to_binary(char *c)
{
	unsigned int mask;
	char res = *c;

	for (mask = *c >> 1; mask != 0; mask = mask >> 1) {
		res = res ^ mask;
	}

	return res;
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
		output[i] = binary_to_gray(&input[i]);
	}

	printf("Output is: \"%s\".\n", output);
	printf("Now back the other way!\n");

	for (i = 0; i < length; i++) {
		reverse[i] = gray_to_binary(&output[i]);
	}

	printf("Reversed output is: \"%s\".\n", reverse);

	return 0;
}
