#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 *
 * This function copies up to n bytes from the string pointed to by src to dest.
 * If the length of src is less than n, the remainder of dest will be padded
 * with null bytes. If the length of src is greater than or equal to n, the
 * string pointed to by dest will not be null-terminated.
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
	dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return dest;
}
