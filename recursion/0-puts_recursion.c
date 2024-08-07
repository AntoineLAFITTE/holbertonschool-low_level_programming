#include "main.h"

/**
 * _puts_recursion - this function prints a string, followed by a new line
 * @s: string to print
 */
void _puts_recursion(char *s)
{
	/* Base Case */
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
