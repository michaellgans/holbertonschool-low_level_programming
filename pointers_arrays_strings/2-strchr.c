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

	while (*s)
	{
		if (*s != c)
		{
			continue;
		}
		else
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
