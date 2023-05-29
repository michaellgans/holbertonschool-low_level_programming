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
		_putchar(x);
	}
	else
	{
		x = (x * -1);
		_putchar(x);
	}

	return (0);
}
