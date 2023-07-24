#include "lists.h"

/**
 * add_dnodeint - adds a node at the beginning of a list
 * @head: double pointer to head of list
 * @n: data in list
 * Return: address or NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/* Create pointer to new node */
	dlistint_t *new_node;

	/* Allocate memory for new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* Add new node to list */
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
