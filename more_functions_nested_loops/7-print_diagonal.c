#include "main.h"

/**
 * print_diagonal - prints diagonal lines hopefully
 * @n: how many lines it needs to be
 */

void print_diagonal(int n)
{
	int lines;
	int spaces;

	if (n <= 0)
	{
		putchar('\n');
	}
	for (spaces = 0; spaces < n; spaces++)
	{
		for (lines = 0; lines < spaces; lines++)
		{
			putchar(' ');
		}
	putchar(92);
	putchar('\n');
	}
}
