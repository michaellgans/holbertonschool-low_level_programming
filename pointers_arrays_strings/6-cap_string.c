#include "main.h"

/**
 * cap_string - capitalizies certain characters
 * @abc: input
 * Return: new string
 */

char *cap_string(char *abc)
{
	int x = 0;
	int y[] = {',', ';', '.', '?', '"', '(', ')', '{', '}', ' ', '\n', '\t'};

	while (abc[x] != '\0')
	{
		if (abc[x] == y[x])
		{
			x++;
			abc[x] = abc[x] - 32;
		}
		x++;
	}
	return (abc);
}
