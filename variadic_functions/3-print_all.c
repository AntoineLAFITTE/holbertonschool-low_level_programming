#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints anything based on the specified format.
 * @format: A list of types of arguments passed to the function.
 *          c: char
 *          i: integer
 *          f: float
 *          s: char * (if the string is NULL, print (nil) instead
 *
 * Description: This function takes a variable number of arguments and prints
 * them based on the given format string. Any other character in the format
 * string is ignored. A new line is printed at the end of the function.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j = 0;
	char *str;
	char *sep = "";

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%s%c", sep, va_arg(args, int));
			break;
		case 'i':
			printf("%s%d", sep, va_arg(args, int));
			break;
		case 'f':
			printf("%s%f", sep, va_arg(args, double));
			break;
		case 's':
			str = va_arg(args, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s%s", sep, str);
			break;
		default:
			j++;
			i++;
			continue;
		}
		sep = ", ";
		i++;
	}

	va_end(args);

	printf("\n");
}
