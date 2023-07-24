#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a list
 * @h: pointer to head
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	/* Pointer to current location */
	const dlistint_t *current = h;
	size_t elements = 0;

	/* Traverse the list */
	while (current != NULL)
	{
		current = current->next;
		elements++;
	}

	return (elements);
}
