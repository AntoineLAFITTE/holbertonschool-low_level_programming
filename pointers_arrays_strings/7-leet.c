#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string to encode
 *
 * This function encodes the characters 'a', 'e', 'o', 't', 'l' and their
 * uppercase equivalents 'A', 'E', 'O', 'T', 'L' into their corresponding
 * leet speak characters: '4', '3', '0', '7', '1'.
 *
 * Return: the encoded string
 */
char *leet(char *str)
{
	int i, j;
	char letters[] = "aAeEoOtTlL";
	char leet[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
	for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = leet[j];
				break;
			}
		}
	}

	return str;
}
