#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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
	int j = 0;
	
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);
	total_len = len1 + len2;

	concat_str = malloc((total_len + 1) * sizeof(char));
	if (concat_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		concat_str[i] = s1[i];
	}
	for (j = 0; j < len2; j++, i++)
	{
		concat_str[i] = s2[j];
	}

	concat_str[total_len] = '\0';

	return (concat_str);

}

