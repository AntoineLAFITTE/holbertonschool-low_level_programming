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
	dlistint_t *new_node, *temp;
	unsigned int current_index = 0;

		if (h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
		return (add_dnodeint(h, n));

	temp = *h;
	while (temp != NULL && current_index < idx)
	{
		if (current_index + 1 == idx)
		{
			new_node->next = temp->next;
			new_node->prev = temp;
			if (temp->next != NULL)
				temp->next->prev = new_node;
				temp->next = new_node;
			return (new_node);
		}
		temp = temp->next;
		current_index++;
	}

	free(new_node);
	return (NULL);
}

