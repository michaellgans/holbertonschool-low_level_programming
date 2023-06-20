#include "main.h"

/**
 * printArguments - entry point
 * @argc: number of arguments
 */

void printArguments(int argc)
{
	printf("%d\n", argc);
}

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printArguments(argc);
	return (0);
}
