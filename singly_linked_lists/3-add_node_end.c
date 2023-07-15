#include "lists.h"

/**
 * add_node_end - adds a node to the end of the code
 * @head: pointer to the head
 * @str: pointer to the string
 * Return: address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	/* Make a new node */
	list_t *new_node;

	/* Allocate Memory to the new node */
	new_node = malloc(sizeof(list_t));

	/* Test if memory failed */
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* Assign values to the data in the new node */
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	/* check for empty list */
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		/* Move through the list to the end and update */
		list_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
	}

	return (new_node);
}
