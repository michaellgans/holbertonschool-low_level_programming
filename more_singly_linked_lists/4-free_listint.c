#include "lists.h"

/**
 * free_listint - frees a list
 * @head: pointer to head
 */

void free_listint(listint_t *head)
{
	/* Set pointer to head of list to start free */
	listint_t *current = head;
	listint_t *next;

	/* traverse through the list until our pointer is NULL */
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
