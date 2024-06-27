#include "main.h"

/**
 * 
 */
void puts_half(char *str)
{
	int len = 0;
	int starting_point = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		starting_point = len / 2;
	}
	else
	{
		starting_point = (len - 1) / 2 + 1;
	}

	while (str[starting_point] != '0')
	{
		_putchar(str[starting_point]);
		starting_point++;
	}

	_putchar('\n');
}
