#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers
 */

void print_numbers(void)

{
	char c[] = "0123456789";
	int x;

	for (x = 0; x < 11; x++)
	{
		putchar(c[x]);
	}
	putchar('\n');
}
