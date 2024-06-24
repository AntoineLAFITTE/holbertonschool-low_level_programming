#include "main.h"

/**
 * more_numbers -prints 10 times the numbers, from 0 to 14,
 * followed by a new line
 */
void more_numbers(void)
{
	int i, j;
	char number;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; i++)
		{
			if (j >= 10)
			{
				_putchar('1');
				number = '0' + (j % 10);
			}
			else
			{	
				number = '0' + j;
			}
			_putchar(number);
		}
		_putchar('\n');
	}
}
