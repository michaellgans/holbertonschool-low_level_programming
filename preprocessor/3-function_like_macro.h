#ifndef ABS_H
#define ABS_H
#include <stdio.h>

/**
 * ABS - computes absolute value
 * @x: number to be computed
 * Return: 0
 */

int ABS(int x)
{
	if (x <= 0)
	{
		x = (x * -1);
	}
	else
	{
		x = (x * 1);
	}
	return (x);
}

#endif
