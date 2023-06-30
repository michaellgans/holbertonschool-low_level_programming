#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - sticks two strings together
 * @s1: first string
 * @s2: second string
 * @n: where to start second string
 * Return: new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	/* Define Variables */
	char *new_string;
	unsigned int length;
	/* If a string is NULL, make it a blank string */
	if (s1 == NULL)
	{
		s1 = ("");
	}
	if (s2 == NULL)
	{
		s2 = ("");
	}
	/* initialize value */
	length = strlen(s1) + n;
	/* Allocate Memory */
	new_string = malloc(sizeof(char) * (length + 1));
	if (new_string == NULL)
	{
		return (NULL);
	}
	/* Concat Strings */
	strncpy(new_string, s1, length);
	new_string[length] = '\0';
	strncat(new_string, s2, n);

	return (new_string);
}
