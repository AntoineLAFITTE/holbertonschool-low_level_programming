#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the string to duplicate.
 *
 * Return: a pointer to the duplicated string, or NULL if str is NULL or
 * if memory allocation fails.
 */
char *_strdup(char *str)
{
	char *duplicate_str;
	unsigned int len;
	unsigned int i;
	
	if (str == NULL);
	{
		return (NULL);
	}
	
	/* get the lenght of the string */
	for (len = 0; str[len] != '\0'; len++)
		;
	/* Allocate memory for the duplicated string */
	duplicate_str = malloc((len + 1) *sizeof(char));
	if (duplicate_str == NULL)
	{
		return (NULL);
	}

	/* Copy the string inside the newly allocated space in memory */
	for (i = 0; i < len; i++)
	{
		duplicate_str[i] = str[i];
	}
	duplicate_str[len] = '\0';

	return (duplicate_str);
}
