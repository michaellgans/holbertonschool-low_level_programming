#include "main.h"
#include <stdio.h>

/**
 * _strlen - entry
 * @s: string
 * Return: length of string
 */

int _strlen(char *s)
{
	int length;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
