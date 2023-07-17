#include "main.h"

/**
 * flip_bits - returns the num of bits needed to be flipped
 * to get from n to m
 * @n: first location
 * @m: second location
 * Return: unsigned int
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int x, count = 0;

	for (x = 0; x < (sizeof(n) * 8); x++)
	{
		if (((n >> x) & 1) != ((m >> x) & 1))
			count++;
	}
	return (count);
}
