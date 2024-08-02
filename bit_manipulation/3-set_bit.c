#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: a pointer to number to modify.
 * @index: the index of the bit to set.
 *
 * Return: 1 if it worked, or -1 if an error occured.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit_counter = sizeof(unsigned long int) * 8;

	if (index >= bit_counter)
		return (-1);

	*n |= (1UL << index);
	return (1);
}

