#include "lists.h"
#include <stdlib.h>

/**
 * sum_dlistint - Returns the sum of all the data (n) of a dlistint_t list.
 * @head: A pointer to the head of the list.
 *
 * Return: The sum of all the data (n) of the list, or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
