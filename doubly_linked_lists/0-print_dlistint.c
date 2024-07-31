#include <stdio.h>
#include "lists.h"

/**
 * print_dlisrint - prints all the elements of a dlistint_t list.
 * @h: pointer to the head of the doubly linked list.
 *
 * Description: This function traverses a doubly linked list,
 * prints each element's integer value and counting the number of nodes
 * in the list.
 * Return: the number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node_counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		node_counter++;
		h = h->next;
	}

	return (node_counter);
}
