#include "lists.h"

/**
 * add_node - a function that adds a node
 * @head: pointer to head
 * @str: pointer to string
 * Return: address of new_node
 */

list_t *add_node(list_t **head, const char *str)
{
	/* Declare variables */
	list_t *new_node;

	/* If failed, return NULL */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* Add new line */
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	/* Address of new element */
	return (new_node);
}
