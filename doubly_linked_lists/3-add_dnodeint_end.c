#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a list
 * @head: pointer to head
 * @n: data in the node
 * Return: address of new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	/* Create new node */
	dlistint_t *new_node;

	/* Allocate memory to new node */
	new_node = malloc(sizeof(dlistint_t));

	/* Test if memory failed */
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* Assign values to the data in the new node */
	new_node->n = n;
	new_node->next = NULL;

	/* Check for empty list */
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		/* Move through the list to the end to update */
		dlistint_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
		new_node->prev = current;
	}
	return (new_node);
}
