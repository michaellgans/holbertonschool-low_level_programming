#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a given position
 * @h: head pointer
 * @idx: where to insert
 * @n: data in the node
 * Return: address of new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node; /* Create new node */
	unsigned int x;
	dlistint_t *current = *h;

	new_node = malloc(sizeof(dlistint_t)); /* Allocate memory */
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n; /* give new node the data */
	if (idx == 0) /* If id = 0, it's the head */
	{
		new_node->next = *h;
		new_node->prev = current;
		*h = new_node;
		return (new_node);
	}
	for (x = 0; x < idx - 1; x++) /* Move through the list until idx */
	{
		if (current == NULL)
		{
			free(new_node);
			return (NULL);
		}
		current = current->next; /* Move to next node */
	}
	new_node->next = current->next; /* A -> Z */
	new_node->prev = current;
	current->next = new_node; /* Y -> A */

	return (new_node);
}


