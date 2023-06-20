#include "main.h"

/**
 * main - entry point
 * @argc: stuff
 * @argc: things
 * Return: 0
 */

int main (int argc, char *argv[])
{
	int x = 0;
	int y = 0;
	int product;

	(void)argc;

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	product = x + y;
	
	if (argc = 0)
	{
		printf("0\n");
	}
	else if
	if (argc < 2 || argc > 3)
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
