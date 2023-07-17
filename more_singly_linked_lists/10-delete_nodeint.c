#include "lists.h"
#include "1-listint_len.c"

/**
 * delete_nodeint_at_index - deletes specific node
 * @head: points to beginning of list
 * @index: where to delete
 * Return: 0
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	/* Define current pointer */
	listint_t *current = *head;
	listint_t *previous = NULL;
	unsigned int count = 0;

	/* Check for empty list */
	if (*head == NULL)
		return (-1);

	/* Traverse the list */
	while (current != NULL && count < index)
	{
		previous = current;
		current = current->next;
		count++;
	}

	/* Is index outside of the list? */
	if (current == NULL)
		return (-1);

	/* Update links */
	if (previous == NULL) /* Previous would be NULL if idx is head */
		*head = current->next;
	else
		previous->next = current->next; /* X -> Z */

	/* Free Y node */
	free(current);

	return (0);
}
