#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concats two strings
 * @s1: first part
 * @s2: second part
 * Return: new string
 */

char *str_concat(char *s1, char *s2)
{
	/* declare variables */
	int x, length;
	char *new_string;

	/* check if s1 AND s2 are NULL */
	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}

	/* check if s1 is null */
	if (s1 == NULL)
	{
		new_string = malloc(sizeof(char) * (strlen(s2) + 1));
		if (new_string == NULL)
		{
			return (NULL);
		}
		strcpy(new_string, s2);
		return (new_string);
	}

	/* Check if s2 is null */
	if (s2 == NULL)
	{
		new_string = malloc(sizeof(char) * (strlen(s1) + 1));
		if (new_string == NULL)
		{
			return (NULL);
		}
		strcpy(new_string, s1);
		return (new_string);
	}

	/*allocate memory and define length*/
	length = strlen(s1);

	new_string = malloc(sizeof(char) * (length + strlen(s2) + 1));

	for (x = 0; s1[x] != '\0'; x++)
	{
		new_string[x] = s1[x];
	}
	for (x = 0; s2[x] != '\0'; x++, length++)
	{
		new_string[length] = s2[x];
	}
	new_string[length] = '\0';

	return (new_string);
}
