#include "lists.h"

/**
 * sum_dlistint - sums a list
 * @head: pointer to head of list
 * Return: sum of list
 */

int sum_dlistint(dlistint_t *head)
{
	/* Set current pointer to head and define sum */
	int sum = 0;
	dlistint_t *current = head;

	/* Edge Case */
	if (current == NULL)
		return (0);
	if (current->next == NULL)
		return (current->n);

	/* Traverse the list */
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
