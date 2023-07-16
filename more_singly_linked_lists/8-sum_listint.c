#include "lists.h"

/**
 * sum_listint - sum the data in the list
 * @head: pointer to head
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	/* set current pointer to head and define sum */
	int sum = 0;
	listint_t *current = head;

	/* Edge Case */
	if (current == NULL)
		return (0);
	/* Edge Case */
	if (current->next == NULL)
		return (current->n);

	/* Go through list */
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
