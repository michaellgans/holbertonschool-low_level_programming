#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - points to grid
 * @width: the width of the grid
 * @height: the height of the grid
 * Return: 0
 */

int **alloc_grid(int width, int height)
{
	/* Declare Variables */
	int x, y, z;
	int **result;
	/* if NULL, be NULL */
	if (height <= 0 || width <= 0)
		return (NULL);
	/* Allocate memory for each row (height) which is a POINTER */
	result = malloc(sizeof(int *) * height);
	if (result == NULL)
		return (NULL);
	/* Allocate memory for each index in the row (width) */
	for (x = 0; x < height; x++)
	{
		result[x] = malloc(sizeof(int) * width);
		if (result[x] == NULL)
		{
			/* Frees alocations */
			for (z = 0; z < height; z++)
			{
				free(result[z]);
			}
			free(result);
			return (NULL);
		}
	}
	/* starts each grid element at 0 */
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			result[x][y] = 0;
		}
	}
	return (result);
}
