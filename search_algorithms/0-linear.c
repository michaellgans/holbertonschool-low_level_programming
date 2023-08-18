#include "search_algos.h"

/**
 * linear_search - searches in an array for a value
 * @array: pointer to first element in that array
 * @size: number of elements in the array
 * @value: number to search for
 * Return: 0 success, -1 failure
 */

int linear_search(int *array, size_t size, int value)
{
	/* Declare and Initialize Varaibles */
	unsigned int x;

	/* If array is empty */
	if (array == NULL)
		return (-1);

	/* Traverse the array */
	for (x = 0; x < size; x++)
	{
		printf("Value checked array[%u] = [%i]\n", x, array[x]);
		if (array[x] == value)
		{ /* If position x and value are not the same */
			return (x);
		}
	}
	return (-1);
}

