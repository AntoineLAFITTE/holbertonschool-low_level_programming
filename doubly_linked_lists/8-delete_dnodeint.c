#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t linked list.
 * @head: double pointer to the head of the doubly linked list.
 * @index: index of the node that should be deleted. Index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int current_index = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = temp->next;
		if (temp->next != NULL)
		{	temp->next->prev = NULL;
			free(temp);

		return (1);
		}
	}

	while (temp != NULL && current_index < index)
	{
		temp = temp->next;
		current_index++;
	}

	if (temp == NULL)
		return (-1);

	if (temp->next != NULL)
		temp->next->prev = temp->prev;
	if (temp->prev != NULL)
		temp->prev->next = temp->next;

	free(temp);
	return (1);
}
