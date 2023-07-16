#include "lists.h"

/**
 * free_list - frees a list
 * @head: points to the head of the list
 */

void free_list(list_t *head)
{
	/* Sets a pointer to the head of the list */
	list_t *current = head;
	list_t *next;

	/* Traverse through the list until our pointer is NULL */
	while (current != NULL)
	{
		/* hold the link in the next pointer */
		next = current->next;
		/* free the string */
		free(current->str);
		/* free current pointer */
		free(current);
		/* set pointers to eachother */
		current = next;
	}
}
