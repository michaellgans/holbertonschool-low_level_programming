#include "main.h"

/**
 * main - entry point
 * @argc: stuff
 * @argv: things
 * Return: 0
 */

int main(int argc; char *argv[])
{
	(void)argc;
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
