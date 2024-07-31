#include <stdlib.h>
#include "lists.h"

/**
* add_dnodeint - adds a new node at the beginnig of dlistint_t list.
* @head: double pointer to the head of the doubly linked list.
* @n: integer to be added to the new mode.
*
* Description: This fuction creates a new node and inserts it.
* at the begining of a doubly linked list.
* Return: the address of new element, or NULL if it failed.
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	return (NULL);

	new_node->n = n;
	new_node-> prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;

	return (new_node);
}
