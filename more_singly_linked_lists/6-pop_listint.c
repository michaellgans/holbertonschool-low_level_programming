#include "lists.h"

/**
 * pop_listint - deletes head node
 * @head: pointer to head
 * Return: head node's data
 */

int pop_listint(listint_t **head)
{
	/* Make current pointer */
	listint_t *current = *head;
	int data;

	/* Edge Case */
	if (*head == NULL)
		return (0);

	/* Save data in tmp */
	data = current->n;

	/* Move head pointer to next node */
	*head = (*head)->next;

	/* Delete by FREEING it */
	free(current);

	/* Return data */
	return (data);
}
