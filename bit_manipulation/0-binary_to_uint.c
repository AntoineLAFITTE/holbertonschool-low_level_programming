#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: a pointer to a string that contains a binary number
 *
 * Return: the number converted, 0 if b is NULL or contains chars not 0 or 1
 */
unsigned int binary_to_unit(const char *b)
{
	unsigned int number = 0;
	int i;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		number = number * 2 + (b[i] - '0');
	}

	return (number);
}
