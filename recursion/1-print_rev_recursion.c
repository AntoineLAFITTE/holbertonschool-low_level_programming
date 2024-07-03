#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 * @s : string to print in reverse
 */
void _print_rev_recursion(char *s)
{
	/* Base Case */
	if (*s == '\0')
	{
		_putchar('\n');
		return
	}
	_putchar(*s);
	_print_rev_recursion(s - 1);
}
