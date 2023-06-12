#include "main.h"
#include "2-strlen.c"

/**
 * _strchr - finds a character in a string
 * @s: pointer to character
 * @c: character
 * Return: character
 */
char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x]; x++, s++)
	{
		if (*s != c)
		{
			continue;
		}
		else
		{
			return (s);
		}
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
