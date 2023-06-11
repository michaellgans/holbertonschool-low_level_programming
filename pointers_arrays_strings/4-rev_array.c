#include "main.h"

/**
 * reverse_array - reverses stuff
 * @a: stuff
 * @n: things
 */

void reverse_array(int *a, int n)
{
	int x;
	int y = n - 1;
	int tmp;

	for (x = 0; x < y; x++)
	{
		tmp = a[x];
		a[x] = a[y];
		a[y] = tmp;
		y--;
	}
}
