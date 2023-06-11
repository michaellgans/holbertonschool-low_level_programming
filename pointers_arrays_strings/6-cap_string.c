#include "main.h"

/**
 * cap_string - capitalizies certain characters
 * @abc: input
 * Return: new string
 */
char *cap_string(char *string)
{
	int x = 0;
	int y;
	int cap_here[] = " \t\n,;.!?\"(){}";

	while (abc[x] != '\0')
	{
		for (y = 0; cap_here[y]; y++)
		{
			if (abc[x - 1] == cap_here[y] && abc[x] >= 97 && abc[x] <= 122)
			{
			abc[x] = abc[x] - 32;
			}
		}
		x++;
	}
	if (abc[0] >= 97 && abc[0] <= 122)
	{
		abc[0] = abc[0] - 32;
	}
	return (abc);
}
