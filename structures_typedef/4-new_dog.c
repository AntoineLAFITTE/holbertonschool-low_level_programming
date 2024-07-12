#include <stdlib.h>
#include "dog.h"

/**
 * _strcpy - Copies a string from source to the destination.
 * @dest: Destination string.
 * @src: Source string.
 *
 * Return: Pointer to the destination string.
 */
char *_strcpy(char *dest, const char *src)
{
	char *start = dest;

	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';

	return (start);
}

/**
 * _strlen - Calculates the length of a string.
 * @str: The string we calculate its length.
 *
 * Return: The length of the string.
 */
int _strlen(const char *str)
{
	int length = 0;

	while (str[length])
	{
		length++;
	}

	return (length);
}

/**
 * new_dog - Creates a new dog.
 * @name: Name of the dog (char pointer)
 * @age: Age of the dog (float)
 * @owner: Name of the dog owner (char pointer)
 *
 * Return: Pointer to the new created dog_t, or NULL if it fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *name_copy, *owner_copy;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	name_copy = malloc(_strlen(name) + 1);
	if (name_copy == NULL)
	{
		free(d);
		return (NULL);
	}
	_strcpy(name_copy, name);

	owner_copy = malloc(_strlen(owner) + 1);
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(d);
		return (NULL);
	}
	_strcpy(owner_copy, owner);

	d->name = name_copy;
	d->age = age;
	d->owner = owner_copy;

	return (d);
}
