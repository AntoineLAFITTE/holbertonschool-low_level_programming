#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: a pointer to the head of the doubly linked list.
 * @index: index of the node, starting at 0.
 *
 * Description: This function traverses a doubly linked list to find
 * the node at the specified index. If the node does not exist,it returns NULL.
 * Return: the address of the nth node, or NULL if it fails.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int current_index = 0;

	while (head != NULL)
	{
		if (current_index == index)
			return (head);
		current_index++;
		head = head->next;
	}

	return (NULL);
}

