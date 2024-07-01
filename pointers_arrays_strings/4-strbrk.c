#include "main.h"

/**
 * _strbrk - searches a string for any set of bytes
 * @s: the string to be searched
 * @accept: the string containing the bytes to match
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found.
 */
char *strbrk(char *s, char *accept)
{
	char *ptr_s = s;
	char *ptr_accept;

	while (ptr != '\0')
	{
		ptr_accept = accept;
		while (*ptr_accept != '\0')
		{
			if (*ptr_s == *ptr_accept)
			{
				return (ptr_s);
			}
			ptr_accept++;
		}
		ptr_s++;
	}
	return (NULL);
}
