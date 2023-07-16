#include "lists.h"

/**
 * print_listint - prints a list
 * @h: points to the head of the list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	/* Create pointer to current node */
	const listint_t *current = h;

	/* Create variable to return */
	size_t num = 0;

	/* Traverse through the list until next = NULL */
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		num++;
	}

	/* Return num */
	return (num);
}
