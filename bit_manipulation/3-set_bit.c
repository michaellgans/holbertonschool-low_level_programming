#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at given index.
 * @n: pointer to bit to convert
 * @index: where bit is located
 * Return: 0
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);

	*n = *n | (1 << index);
	return (1);
}
