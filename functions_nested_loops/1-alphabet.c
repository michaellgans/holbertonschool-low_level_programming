#include "main.h"
#include <unistd.h>
/**
 * main - entry point thank you Sarah
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char c[] = "abcdefghijklmnopqrstuvwxyz";
	int x;

	for (x = 0; x < 27; x++)
	{
		_putchar(c[x]);
	}
	_putchar('\n');
}
