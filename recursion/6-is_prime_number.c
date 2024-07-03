#include "main.h"

/**
 * find_prime_number - Helper function to check if a number is prime
 * @n: The number to check
 * @i: The current divisor to check
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int find_prime_number(int n, int i)
{
	if (n % i == 0)
	{
    	return (0);
	}
	if (i * i > n)
	{
		return (1);
	}
	return (find_prime_number(n, i + 1));
}

/**
 * is_prime_number - Checks if an integer is a prime number
 * @n: The number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (find_prime_number(n, 2));
}
