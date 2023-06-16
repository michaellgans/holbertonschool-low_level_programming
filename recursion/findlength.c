#include <stdio.h>

/**
 * findLength - finds the length of a string passed to it
 * @string: pointer to the start of the string
 */

int findLength(char *string)
{
	int x = 0;

	while (string[x] != '\0')
	{
		x++;
	}
	return (x);
}

/**
 *int main(void)
 *{
 *	printf("%i\n", findLength("test"));
 *	return (0);
 *}
 */
