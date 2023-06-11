#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int x = 0;
	int y = 0;
	int result;

	while (s1[x] == s2[y] && s1[x] != '\0')
	{
		x++;
		y++;
	}
	result = s1[x] - s2[y];
	return (result);
}
