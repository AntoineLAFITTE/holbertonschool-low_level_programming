#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: a pointer to number to modify.
 * @index: the index of the bit to clearr.
 *
 * Return: 1 if it worked or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit_count = sizeof(unsigned long int) * 8;

	if (index >= bit_count)
		return (-1);

	*n &= ~(1UL << index);
	return (1);
}

