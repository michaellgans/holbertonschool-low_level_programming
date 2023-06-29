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
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
