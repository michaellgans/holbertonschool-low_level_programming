#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes function on array
 * @array: holds things to execute on
 * @size: size of array
 * @action: pointer to array_iterator
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	for (x = 0; x < size; x++)
		action(array[x]);
}
