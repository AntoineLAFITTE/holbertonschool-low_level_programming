#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * This function compares the two strings s1 and s2. It returns an integer
 * less than, equal to, or greater than zero if s1 is found, respectively, to
 * be less than, to match, or be greater than s2.
 *
 * Return: an integer less than, equal to, or greater than zero
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
