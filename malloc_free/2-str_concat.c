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

	/*MAYBE if statementment for NULL*/

	/*allocate memory and define length*/
	length = strlen(s1);

	s1 = malloc(sizeof(char) * (length + 1));

	for (x = 0; s2[x] != '\0'; x++, length++)
	{
		s1[length] = s2[x];
	}
	return (s1);
}
