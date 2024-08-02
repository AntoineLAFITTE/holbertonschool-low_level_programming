#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int bit_count = sizeof(n) * 8;
	int started = 0;

	mask <<= (bit_count - 1);

	while (mask)
	{
		if (n & mask)
		{
			_putchar('1');
			started = 1;
		}
		else if (started)
		{
			_putchar('0');
		}
		mask >>= 1;
	}

	if (!started)
	{
		_putchar('0');
	}
}
