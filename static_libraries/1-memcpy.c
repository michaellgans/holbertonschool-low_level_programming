#include "main.h"

/**
 * _memcpy - function
 * @dest: new string
 * @src: old string
 * @n: length to change
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x, y;

	for (x = 0, y = 0; x < n && src[y]; x++, y++)
	{
		dest[x] = src[y];
	}
	for (; x < n; x++)
	{
		dest[x] = '\0';
	}
	return (dest);
}
