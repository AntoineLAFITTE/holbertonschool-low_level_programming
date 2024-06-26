#include "main.h"

/**
 *
 */
void print_rev(char *s)
{
	while (*s)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
