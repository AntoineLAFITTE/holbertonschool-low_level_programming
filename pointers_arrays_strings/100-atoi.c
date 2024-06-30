#include "main.h"

/**
 * _atoi -  converts a string to an integer.
 * @s: pointer to the string to be converted
 *
 * Return: the converted integer
 */
int _atoi(char *s)
{
	unsigned int result = 0;
	int sign = 1;
	int found_digit = 0;

	while (*s)
	{
		if (*s =='-')
		{
			sign *= -1;
		}
		else if (*s == '+')
		{

		}
		else if (*s >= '0' && *s <= '9')
		{
			found_digit = 1;
			result = result * 10 + (*s - '0');
		}
		else if (found_digit)
		{
			break;
		}
		s++;
	}

	return (sign * result);
}
