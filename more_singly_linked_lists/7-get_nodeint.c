#include "lists.h"

/**
 * get_nodeint_at_index - get node at index
 * @head: pointer to head
 * @index: pointer to where to get node
 * Return: NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	/* Create a current pointer */
	unsigned int x;
	listint_t *current = head;

	/* Move pointer to index */
	for (x = 0; x < index; x++)
	{
		if (current->next == NULL)
			return (NULL);

		current = current->next;
	}
	return (current);
}
