#include "lists.h"

/**
 * listint_len - returns number of elements in a linked list
 * @h: pointer to the head
 * Return: num of elements
 */

size_t listint_len(const listint_t *h)
{
	/* Create pointer for current location */
	const listint_t *current = h;
	size_t elements = 0;

	/* Move through list */
	while (current != NULL)
	{
		current = current->next;
		elements++;
	}
	/* return elements */
	return (elements);
}
