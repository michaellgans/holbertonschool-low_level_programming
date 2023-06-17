#include "main.h"
#include <stdio.h>
#include "2-strlen.c"

/**
 * _strcat - entry
 * @dest: New String
 * @src: Old String
 * Return: character pointer
 */

char *_strcat(char *dest, char *src)
{
	int length = _strlen(dest);
	int x;

	for (x = 0; src[x] != '\0'; x++, length++)
	{
		dest[length] = src[x];
	}
	return (dest);
}
