#include "main.h"

/**
 * _find_sqrt - find the natural square root
 * @n: The number to find the square root of
 * @i: The current number to check
 *
 * Return: The natural square root or -1 if number doesnt have a sqare root.
 */
int _find_sqrt(int n, int i)
{
	if (i * i > n)
	{	
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (_find_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: the number we want the natural sqare root of.
 * Return: The natural square root or -1 if number doesnt have a sqare root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_find_sqrt (n, 0));
}
