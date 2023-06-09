#include "lists.h"

/**
 * list_len - prints the length of a list
 * @h: pointer to the head
 * Return: size_t
 */

size_t list_len(const list_t *h)
{
	/* Declare Variables */
	const list_t *YouAreHere = h;
	size_t count = 0;
	int x;

	/* Traverse through the list. */
	for (x = 0; YouAreHere != NULL; x++)
	{
		YouAreHere = YouAreHere->next;
		count++;
	}

	return (count);
}
