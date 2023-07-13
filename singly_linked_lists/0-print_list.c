#include "lists.h"

/**
 * print_list - prints the list contained in nodes
 * @h: head?
 * Return: size_t
 */

size_t print_list(const list_t *h)
{
	/* Defining Variables */
	size_t size = 0;
	const list_t *YouAreHere = h;
	int x;
	/* Move through the list */
	for (x = 0; YouAreHere != NULL; x++)
	{
		/* If the string is NULL, print [0] (nil) */
		if (YouAreHere->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", YouAreHere->len, YouAreHere->str);
		size++;
		YouAreHere = YouAreHere->next;
	}
	return (size);
}
