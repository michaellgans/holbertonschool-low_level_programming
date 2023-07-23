#include "lists.h"

/**
 * print_dlistint - prints all the elements of a list
 * @h: pointer to the head of the list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	/* Define Variables */
	size_t size = 0;
	const dlistint_t *current = h;
	int x;

	/* Traverse the list */
	for (x = 0; current != NULL; x++)
	{
		printf("%d\n", current->n);
		size++; /* counts number of nodes */
		current = current->next;
	}
	return (size);
}
