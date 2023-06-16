#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to the beginning of the string
 * Return: 0
 */

int _strlen_recursion(char *s)
{
	/*base case*/
	if (*s == '\0')
	{
		return (0);
	}

	/*recursion*/
	return (1 + _strlen_recursion(s + 1));
}
