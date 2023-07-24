#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: pointer to head of list
 */

void free_dlistint(dlistint_t *head)
{
	/* Set pointer to head of list to start freeing */
	dlistint_t *current = head;
	dlistint_t *next;

	/* Traverse the list until pointer is NULL */
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
