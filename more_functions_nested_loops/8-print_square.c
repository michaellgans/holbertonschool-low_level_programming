#include "main.h"

/**
 * print_square - prints a square
 * @size: size of the sqare
 */

void print_square(int size)
{
	int rows;
	int columns;

	if (size <= 0)
	{
		putchar('\n');
	}
	for (rows = 0; rows < size; rows++)
	{
		for (columns = 0; columns < size; columns++)
		{
			putchar(35);
		}
	putchar('\n');
	}
}
