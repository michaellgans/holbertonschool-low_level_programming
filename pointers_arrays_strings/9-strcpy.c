#include "main.h"
#include <stdio.h>
#include "2-strlen.c"
/**
 * _strcpy - function
 * @dest: copy
 * @src: string
 * Return: character
 */

char *_strcpy(char *dest, char *src)
{
	int x;
	int length = _strlen(src);

	for (x = 0; x < length; x++)
	{
		src[x] = dest[x];
	}
	return (dest);
}
