#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees memory used by a function
 * @grid: the grid that needs to be freed
 * @height: height
 */

void free_grid(int **grid, int height)
{
	/* define variables */
	int x;
	/* free each row based on height */
	for (x = 0; x < height; x++)
	{
		free(grid);
	}
	free(grid);
}
