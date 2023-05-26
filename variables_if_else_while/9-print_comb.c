#include <stdio.h>
#include <string.h>

/**
 * main - entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	int c;

	for (c = 0; c < 8; c++)
	{
		putchar(c);
		putchar(',');
		putchar(' ');
	}

	return (0);
}
