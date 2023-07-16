#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: pointer to head
 */

void free_listint2(listint_t **head)
{
	/* Set pointer to head of list to start free */
	listint_t *current;

	if (head == NULL)
		return;

	/* traverse through the list until our pointer is NULL */
	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
	*head = NULL;
}
