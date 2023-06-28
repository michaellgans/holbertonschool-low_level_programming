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
	/*initialize variables*/
	int x, length;
	char *new_string;

	/*MAYBE if statementment for NULL*/

	if (s1 == NULL)
	{
		return (NULL);
	}
	else if (s2 == NULL)
	{
		return (NULL);
	}

	/*allocate memory and define length*/
	length = strlen(s1);

	new_string = malloc(sizeof(new_string) * 3);

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
