#include "main.h"

/**
 * _strspn - returns the length of accept
 * @s: where to search
 * @accept: what to match
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
			{
				count++;
				break;
			}
			else if (accept[x + 1] == '\0')
			{
				return (count);
			}
		}
		x++;

	}
	return (count);
}
