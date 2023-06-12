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
	int length = _strlen(s);

	for (x = 0; s[x]; x++, s++)
	{
		if (*s == c)
		{
			return (s);
		}
		else if (x == length)
		{
			return (NULL);
		}
	}
	return (NULL);
}
