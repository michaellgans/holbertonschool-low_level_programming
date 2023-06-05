#include "main.h"
#include <stdio.h>
#include "2-strlen.c"

/**
 * print_rev - function
 * @s: string
 */

void print_rev(char *s)
{
	int len = _strlen(s);

	for (len = len - 1; len >= 0; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
