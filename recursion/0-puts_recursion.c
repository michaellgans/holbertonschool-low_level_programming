#include "main.h"
#include "findlength.c"

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: pointer to the start of the string passed in by the main.
 */

void _puts_recursion(char *s)
{
	/* base case */
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	/*action*/
	_putchar(*s);

	/*move the pointer with a recursion*/
	_puts_recursion(s + 1);
}
