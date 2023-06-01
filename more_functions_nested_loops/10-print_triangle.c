#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 */

void print_triangle(int size)
{
	int spaces;
	int rows;

	if (size <= 0)
	{
		putchar('\n');
	}
	for (spaces = 0; spaces < size; spaces++)
	{
		for (rows = 0; rows < spaces; rows++)
		{
			putchar('x');
		}
	putchar('\n');
	}
}
