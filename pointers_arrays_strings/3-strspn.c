#include "main.h"
#include "2-strlen.c"

/**
 * _strspn - returns the length of accept
 * @s: where to search
 * @accept: what to match
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y;
	unsigned int count = 0;

	for (x = 0, y = 0; s[x] & accept[y]; x++, y++)
	{
		if (s[x] == accept[y])
		{
			count++;
		}
	}
	return (count);
}
