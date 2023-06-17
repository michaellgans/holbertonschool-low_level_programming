#include "main.h"
#include "2-strlen.c"

/**
 * _strncpy - function that coppies strings
 * @dest: new string
 * @src: old string
 * @n: length to change
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;
	int y;

	for (x = 0, y = 0; x < n && src[y] != '\0'; x++, y++)
	{
		dest[x] = src[y];
	}
	for (; x < n; x++)
	{
		dest[x] = '\0';
	}
	return (dest);
}
