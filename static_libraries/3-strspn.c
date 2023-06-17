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
	int x, y;

	for (x = 0; accept[x]; x++)
	{
		if (s[x] != ' ')
		{
			for (y = 0; accept[y]; y++)
			{
				if (s[x] == accept[y])
				{
					count++;
				}
			}
		}
		else
		{
			return (count);
		}
	}
	return (count);
}
