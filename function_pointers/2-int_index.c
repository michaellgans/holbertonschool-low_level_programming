#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * int_index - searches for integers
 * @array: where to search
 * @size: of array
 * @cmp: pointer to int_index
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;
	/* if size <= 0, return -1 */
	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);
	/* if int_index is true, give that int, otherwise -1 */
	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]))
			return (x);
	}
	return (-1);
}
