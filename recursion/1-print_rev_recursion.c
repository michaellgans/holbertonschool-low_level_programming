#include "main.h"
#include "findlength.c"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: pointer to the beginning of a string
 */

void _print_rev_recursion(char *s)
{
	/*base case*/
	if (*s == '\0')
	{
		return;
	}

	/*recursive call to move pointer forwards one*/
	_print_rev_recursion(s + 1);

	/*print character*/
	_putchar(*s);
}
