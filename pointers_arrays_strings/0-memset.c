#include "main.h"

/**
 * _memset - function
 * @s: pointer to memory block
 * @c: value to set memory to
 * @n: number of bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
