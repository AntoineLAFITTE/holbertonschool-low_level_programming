#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the main string containing the list of character to match in s
 * @accept: The string containing the list of characters to match in s
 *
 * Return: The number of bytes in the initial segment of s with 
 * bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *p;

	while (*s)
	{
		for (p = accept; *p; p++)
		{
			if (*s == *p)
				break;
		}
		if (*p == '\0')
			break;
		count++;
		s++;
	}
	return count;
}

