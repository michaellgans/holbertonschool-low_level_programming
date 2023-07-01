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
	x = 0;

	while (min < max)
	{
		x++;
		min++;
	}

	length = x;
	/* allocate memory */
	array = malloc(sizeof(int) * length);
	return (array);
}
