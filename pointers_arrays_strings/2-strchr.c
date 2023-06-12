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
	int x = 0;

	while (s[x])
	{
		if (*s != c)
		{
			continue;
		}
		else
		{
			return (s);
		}
		x++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
