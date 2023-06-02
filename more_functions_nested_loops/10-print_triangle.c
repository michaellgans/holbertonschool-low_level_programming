#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 */

void print_triangle(int size)
{
	int spaces;
	int rows;

	if (size > 0)
	{
		for (spaces = 1; spaces <= size; spaces++)
		{
			for (rows = 1; rows <= size; rows++)
			{
				if ((spaces + rows) > size)
				{
					putchar(35);
				}
				else
				{
					putchar(' ');
				}
			}
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
