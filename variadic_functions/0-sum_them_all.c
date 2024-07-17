#include "variadic_functions.h"

/**
 * sum_them_all - Returns sum of all parameters.
 * @n: The Number of parmaeters passed to the function.
 *
 * Return: The sum of all parameters given to the functions.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;

	if(n == 0)
	return(0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return(sum);
}
