#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all the numbers of base 16
 * in lowercase followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int b_16_n;

	for (b_16_n = 0; b_16_n < 16; b_16_n++)
	{
		if (b_16_n < 10)
			putchar(b_16_n + '0');
		else
			putchar(b_16_n - 10 + 'a');
	}
	putchar('\n');

	return (0);
}
