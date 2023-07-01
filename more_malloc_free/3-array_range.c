#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates array of ints
 * @min: lowest int
 * @max: highest int
 * Return: pointer to array of ints
 */

int *array_range(int min, int max)
{
	/* declare variables */
	int *array;
	int x, length;
	/* if statements for min > max */
	if (min > max)
	{
		return (NULL);
	}
	/* calculate length */
	length = max - min + 1;
	/* allocate memory */
	array = malloc(sizeof(int) * length);
	if (array == NULL)
	{
		return (NULL);
	}
	/* create array */
	for (x = 0; x < length; x++)
	{
		array[x] = min++;
	}
	return (array);
}
