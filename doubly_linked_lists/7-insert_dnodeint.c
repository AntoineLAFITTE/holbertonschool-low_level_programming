#include "lists.h"
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: a double pointer to the head of the doubly linked list.
 * @idx: index of the list where the new node should be added.
 * Indes starts at 0.
 * @n: integer that will be added to the new node.
 *
 * Description: This function creates a new node and inserts it
 * at the specified index in a doubly linked list. If the index is out of range
 * the function does not add the new node and returns NULL.
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *new_node;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}

	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = temp;
	new_node->next = temp->next;
	temp->next->prev = new_node;
	temp->next = new_node;

	return (new_node);
}
