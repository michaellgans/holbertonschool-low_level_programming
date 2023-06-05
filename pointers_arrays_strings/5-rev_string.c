#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - function
 * @s: input
 */

void rev_string(char *s)
{
	int x;
	int length = _strlen(s);
	int temp;

	for (x = 0; x < length / 2; x++)
	{
		temp = s[x];
		s[x] = s[length - x - 1];
		s[length - x - 1] = temp;
	}
}
