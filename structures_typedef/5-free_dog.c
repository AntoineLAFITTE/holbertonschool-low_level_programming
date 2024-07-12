#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees the memory which is allocated for a dog.
 * @d: Pointer to the dog we want to free.
 *
 * Return: void.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
