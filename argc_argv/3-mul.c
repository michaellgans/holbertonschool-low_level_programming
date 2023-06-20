#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: stuff
 * @argv: things
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x = 0;
	int y = 0;
	int product;

	(void)argc;

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	product = x * y;

	if (argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
	printf("%i\n", product);
	}

	return (0);
}
