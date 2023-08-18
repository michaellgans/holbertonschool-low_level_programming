#include "search_algos.h"

/**
 * binary_search - searches for a value in an array
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: number to search for
 * Return: where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	/* Declare and Initialize Variables */
	int x;
	int left = 0;
	int right = size - 1;
	int middle;

	/* If array is empty */
	if (array == NULL)
		return (-1);

	/* Traverse through array */
	while (left <= right)
	{
		printf("Searching in array: ");
		for (x = left; x <= right; x++)
		{
			if (x != right)
				printf("%i, ", array[x]);
			else
				printf("%i\n", array[x]);
		}

		/* Average to find middle */
		middle = left + (right - left) / 2;

		/* Is the number the middle? */
		if (array[middle] == value)
			return (middle);
		/* Is value greater than middle */
		else if (array[middle] < value)
			left = middle + 1;
		/* Is value less than middle */
		else
			right = middle - 1;
	}
	return (-1);
}
