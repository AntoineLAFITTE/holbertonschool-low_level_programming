#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: the number to return the factorial of.
 * Return: the factorial of the number. If n is less than 0,
 * returns -1 to indicate an error.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
