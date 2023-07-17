#include "main.h"

/**
 * print_binary - changes a decimal to binary
 * @n: number to change
 */

void print_binary(unsigned long int n)
{
	/* n >> 1 is the same as n / 2 */
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
