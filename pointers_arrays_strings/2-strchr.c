#include "main.h"

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
		if (*s == c)
		{
			return (s);
		}
		else if (c == '\0')
		{
			return (NULL);
		}
	}
	return (NULL);
}
