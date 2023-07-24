#include "lists.h"

/**
 * get_dnodeint_at_index - returns a node
 * @head: head of list
 * @index: where to get the node
 * Return: the node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	/* Create a current pointer */
	unsigned int x;
	dlistint_t *current = head;

	/* Move pointer to index */
	for (x = 0; x < index; x++)
	{
		if (current->next == NULL)
			return (NULL);

		current = current->next;
	}
	return (current);
}
