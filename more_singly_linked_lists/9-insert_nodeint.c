#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node
 * @head: pointer to start of the list
 * @idx: where to insert the new node
 * @n: data in the node
 * Return: address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	/* Create new_node */
	listint_t *new_node;
	unsigned int x;

	listint_t *current = *head;
	/* Allocate memory for new_node */
	new_node = malloc(sizeof(listint_t));
	/* Test if memory failed */
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	/* Assign value to data in new node */
	new_node->n = n;
	/* if idx = 0, make it the head */
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	/* Traverse through the list until you get to idx */
	for (x = 0; x < idx - 1; x++)
	{
		if (current == NULL)
		{
			free(new_node);
			return (NULL);
		}
		current = current->next;
	}

	new_node->next = current->next; /* A -> Z */
	current->next = new_node; /* Y -> A */

	return (new_node);
}
