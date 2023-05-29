#include "main.h"

/**
 * print_last_digit - CHECK YOUR PROTOTYPE
 * @x: CHECK YOUR VAR
 * Return: CHECK YOUR PROTOTYPE
 */
int print_last_digit(int x)
{
	int INT_MIN = y;

	if (x >= 0)
	{
		x = (x % 10);
		_putchar('0' + x);
		return (x);
	}
	else if (x < 0)
	{
		x = -x;
		x = (x % 10);
		_putchar('0' + x);
		return (x);
	}
	else if (x == y)
	{
		x = -x;
		x = (x % 10);
		_putchar('0' + x);
		return (x);
	}
	else
	{
		return (9);
	}
}
