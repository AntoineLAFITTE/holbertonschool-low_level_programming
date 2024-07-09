#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: First string
 * @s2: Second string
 *
 * Return: A Pointer to new alloacted space in memory where the result of
 * the two concatenated string is. NULL if it fails.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int len1 = 0;
	int len2 = 0;
	int total_len;
	int i = 0;
	
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (*(s1 + len1) != '\0')
	{
		len1++;
	}

	while (*s2 + len2) != '\0')
	{
		len2++;
	}

	total_len = len1 + len2;

	concat_str = (char *) malloc((total_len * sizeof(char) +1);

	if (concat_str == NULL)

		return (NULL);}

	for (i = 0; i < len1; i++)

		concat_str[i] = s1[i];

	for (i = 0; i < len2; i++)

		concat_str[i + len1] = s2[i];

	return (concat_str);

}
