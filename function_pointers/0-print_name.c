#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - prints name
 * @name: name to be printed
 * @f: pointer to print_name
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		exit(0);
	f(name);
}
