#include "main.h"

/**
 * _strncat - concatenates two strings using at most n bytes from src
 * @dest: destination string
 * @src: source string
 * @n: maximum number of bytes to use from src
 *
 * This function appends the src string to the dest string, using at most n
 * bytes from src. src does not need to be null-terminated if it contains n or
 * more bytes.
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest_start = dest;

	while (*dest)
	{
		dest++;
	}

	while (n-- && *src)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (dest_start);
}
