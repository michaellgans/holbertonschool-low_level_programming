#include "main.h"
#include <stdio.h>

/**
 * programName - prints the name of the program
 * @argv: each argument
 */
void programName(char *argv[])
{
	printf("%s\n", argv[0]);
}

/**
 * main - entry point
 * @argv: each argument
 * @argc: lines
 * Return: 0
 */

int main(int argc, char *argv[])
{
	programName(argv);
	return (0);
}
