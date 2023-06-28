#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns pointer to a copy of a string
 * @str: pointer of origional string
 * Return: char
 */

char *_strdup(char *str)
{
	unsigned int x, y;
	char *new_str;
	unsigned int size;

	if (str == NULL)
	{
		return (NULL);
	}

	/*allocates memory of new string*/
	size = strlen(str);

	new_str = malloc(sizeof(char) * (size + 1));

	if (new_str == NULL)
	{
		return (NULL);
	}

	/*makes a copy of a string*/
	for (x = 0, y = 0; x < size; x++, y++)
	{
		new_str[x] = str[y];
	}

	new_str[size] = '\0';

	return (new_str);
}
