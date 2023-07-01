#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size of bytes
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	/* Declare variables */
	void *array;
	unsigned int x;
	char *index;
	/* Base Case If Statements */
	if (nmemb == 0 || size == 0)
		return (NULL);
	/* Assign memory for each index in nmemb */
	array = malloc(nmemb * size);
	if (array == NULL)
	{
		return (NULL);
	}
	/* Sets each one to 0 */
	index = (char *)array;
	for (x = 0; x < nmemb; x++)
	{
		*index = 0;
		index += size;
	}
	return (array);
}
