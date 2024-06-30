#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: string to modify
 *
 * This function iterates over the input string and converts all lowercase
 * letters to uppercase letters. It modifies the string in place and returns
 * a pointer to the resulting string.
 *
 * Return: a pointer to the resulting string
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr)
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - 32;
		}
		ptr++;
	}

	return (str);
}
