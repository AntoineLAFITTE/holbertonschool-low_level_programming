#include "main.h"

/**
 * print_rev - prints in reverse, followed by a new line
 * @s: pointer to the string to be reversed
 */
void print_rev(char *s)
{
	int len = 0;
	int i = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
	_putchar(s[i]);
	}

	_putchar('\n');
}
