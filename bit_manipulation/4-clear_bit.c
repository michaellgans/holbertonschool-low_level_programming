#include "main.h"

/**
 * clear_bit - clears a bit at a given location
 * @n: bit to clear
 * @index: where bit lives
 * Return: 0
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);

	*n = *n & ~(1 << index);
	return (1);
}
