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
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}
