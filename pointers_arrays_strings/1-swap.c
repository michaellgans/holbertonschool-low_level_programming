#include "main.h"
#include <stdio.h>

/**
 * swap_int - entry
 * @a: one
 * @b: two
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
