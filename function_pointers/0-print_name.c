#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints name
 * @name: name to be printed
 * @f: pointer to print_name
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
