#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned ints
 * @b: string of 0 and 1's
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	/* Define variables */
	unsigned int x;

	unsigned int y = 0;
	unsigned int sum = 0;

	/* Check b is NULL */
	if (b == NULL)
		return (0);

	/* Loop through given string */
	for (x = 0; b[x] != '\0'; x++, y++)
	{
		if (b[x] != '0' && b[x] != '1')
		{
			return (0);
		}
		sum = (sum * 2) + (b[x] - '0');
	}
	return (sum);
}
