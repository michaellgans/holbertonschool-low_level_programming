#include "main.h"
#include <stdio.h>

/**
 * _isdigit - entry point
 * @c: this is the variable
 * Return: 
 */

int _isdigit(int c)

{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
