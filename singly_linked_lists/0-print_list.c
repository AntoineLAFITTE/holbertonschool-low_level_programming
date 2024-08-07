#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to the list_t list.
 *
 * Return: the number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t node_counter = 0;

	while (h)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next; /** to moove to the next node */
		node_counter++;
	}

	return (node_counter);
}
