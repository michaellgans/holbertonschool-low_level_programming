#include "main.h"

/**
 * string_toupper - capitalizes all lowercase
 * @string: to be capitalized
 * Return: new string
 */

char *string_toupper(char *string)
{
	int x = 0;

	while (string[x] != '\0')
	{
		if (string[x] >= 97 && string[x] <= 122)
		{
			string[x] = string[x] - 32;
		}
	x++;
	}
	return (string);
}
