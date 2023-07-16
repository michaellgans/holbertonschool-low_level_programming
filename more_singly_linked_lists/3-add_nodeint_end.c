#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end
 * @head: pointer to the head
 * @n: data in the node
 * Return: address of new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* Create new node */
	listint_t *new_node;

	/* Allocate memory to new node */
	new_node = malloc(sizeof(listint_t));

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
		*head = new_node;
	}
	else
	{
		/* Move through the list to the end and update */
		listint_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
	}
	return (new_node);
}
