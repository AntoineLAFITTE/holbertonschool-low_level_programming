#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string to modify
 *
 * The function capitalizes the first letter of every word in the string.
 * All Words are separated by spaces, tabulations, new lines, and the
 *  following characters: ,, ;, ., !, ?, ", (, ), {, and }.
 *
 * Return: modified string (pointer to the modfied string)
 */
char *cap_string(char *str)
{
	int i = 0;
	char separators[] = " \t\n,;.!?\"(){}";

	/* Capitalize the first character if it's a lowercase letter */
	/* 32 de diff ds le ASCII entre maj et lowercase de la meme letter*/
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] = str[i] - 32;
	}

	/* go through the string */
	while (str[i] != '\0')
	{
		int j = 0;

		/* Check if current character is a separator */
		while (separators[j] != '\0')
		{
			if (str[i] == separators[j])
			{
				/* If the next character is a lowercase letter, capitalize it */
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] = str[i + 1] - 32;
				}
				break;
				}
				j++;
		}
		i++;
	}

	return (str);
}
