#include "main.h"
#include <stdio.h>

/**
 * _abs - CHECK YOUR PROTOTYPE
 * @x: BLAH
 * Return: CHECK YOUR PROTOTYPE
 */
int _abs(int x)
{
	if (x >= 0)
	{
		_abs(x);
		_putchar(x);
	}
	else if (x < 0)
	{
		_abs(x);
		_putchar(x);
	}
	else
	{
	}

	return (0);
}
