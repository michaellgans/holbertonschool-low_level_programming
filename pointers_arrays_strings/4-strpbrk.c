#include "main.h"
/**
 * _strpbrk - searches for a byte
 * @s: where to search
 * @accept: what to search for
 * Return: what was found
 */
char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
			{
				return (s);
			}
		}
	s++;
	}
	return (0);
}
