#include "main.h"
#include "2-strlen.c"

/**
 * _atoi - function
 * @s: var
 * Return: 0
 */

int _atoi(char *s)
{
	int x;
	int length = _strlen(s);

	for (x = 0; x < length; x++)
	{
		if (x >= 48 && x <= 57)
		{
			return (x);
		}
	}
	return (x);
}
