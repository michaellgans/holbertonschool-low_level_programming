#include "main.h"
#include <unistd.h>
/**
 * main - entry point thank you Sarah
 *
 * Return: Always 0.
 */
int main(void)
{
	char c[] = "_putchar";
	int x;

	for (x = 0; x < 8; x++)
	{
		_putchar(c[x]);
	}
	_putchar('\n');

	return (0);
}
