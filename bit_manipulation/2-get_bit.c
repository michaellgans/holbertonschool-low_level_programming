#include "main.h"

/**
 * git_bit - prints a bit at given index.
 * @n: number to convert
 * @index: where to get the number
 * Return: value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);
	/* Return value of bit at index given */
	return ((n >> index) & 1);
}
