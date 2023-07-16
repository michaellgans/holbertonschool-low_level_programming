#include "lists.h"

/**
 * add_nodeint - adds a new node at start of list
 * @head: pointer to head of list
 * @n: data in node
 * Return: address of new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	/* Create new node */
	listint_t *new_node;

	/* Allocate memory for new node the same size as other nodes */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* Add new node */
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	/* Address of new element */
	return (new_node);
}
