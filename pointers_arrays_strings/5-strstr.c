#include "main.h"
#include "2-strlen.c"

/**
 * _strstr - finds needle
 * @haystack: where to look for needle
 * @needle: to be found
 * Return: pointer to needle inside of haystack.
 */

char *_strstr(char *haystack, char *needle)
{
	int length = _strlen(needle);
	int x;

	while (*haystack)
	{
		for (x = 0; needle[x]; x++)
		{
			if (haystack[x] != needle[x])
			{
				break;
			}
		}
		if (x != length)
		{
			haystack++;
		}
		else
		{
			return (haystack);
		}
	}
	return (0);
}
