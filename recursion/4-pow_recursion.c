#include "main.h"

/**
 * _pow_recursion - calculates the power of a number to a number
 * @x: first number
 * @y: power of
 * Return: 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
