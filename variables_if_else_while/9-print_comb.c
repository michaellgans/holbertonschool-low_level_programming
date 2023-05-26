#include <stdio.h>
#include <string.h>

/**
 * main - entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	char str[50] = "1, 2, 3, 4, 5, 6, 7, 8, 9\n";
	int i;

	for (i = 0; i < strlen(str); i++)
	{
		putchar(str[i]);
	}

	return (0);
}
