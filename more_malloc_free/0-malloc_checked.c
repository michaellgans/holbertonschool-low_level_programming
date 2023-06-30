#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * *malloc_checked - allocates memory using malloc
 * @b: length of string?
 * Return: Void
 */

void *malloc_checked(unsigned int b)
{
	/* Declare Variables */
	char *string;
	/* Allocate memory to a string */
	string = malloc(sizeof(int) * b);
	/* Check for NULL with Exit Status of 98*/
	if (string == NULL)
	{
		exit(98);
	}
	return (string);
}
