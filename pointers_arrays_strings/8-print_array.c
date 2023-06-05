#include "main.h"
#include "2-strlen.c"
#include <stdio.h>
/**
 * print_array - function
 * @a: pointer
 * @n: index position
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (x != (n - 1))
		{
			printf("%i, ", a[x]);
		}
		else
		{
			printf("%i", a[x]);
		}
	}
	putchar('\n');
}
