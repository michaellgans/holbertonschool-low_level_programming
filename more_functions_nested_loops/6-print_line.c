#include "main.h"

/**
 * print_line - prints a line
 * @n: number of spaces in the line
 */

void print_line(int n)
{
	int x;

	if (n <= 48)
	{
		putchar('\n');
	}
	else
	{
		for (x = 48; x <= n; x++)
		putchar('_');
	}
	putchar('\n');
}
