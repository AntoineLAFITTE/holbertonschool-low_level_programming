#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>

/*
 * print_numbers - Prints numbers, Followed by a new line.
 * @separator: string to be printed between values.
 * @n: number of integers passed to the function.
 * Return: Numbers passed as arguments to the function.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(args);

	printf("\n");
}
