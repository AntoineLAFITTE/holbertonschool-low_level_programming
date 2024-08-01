#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) 
 * of a dlistint_t linked list.
 * @head: a pointer to the head of the doubly linked list.
 *
 * Description: This function traverses a doubly linked list and calculates
 * the sum of all the integer data (n) in the list.
 * Return: the sum of all the data (n) in the list, or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
