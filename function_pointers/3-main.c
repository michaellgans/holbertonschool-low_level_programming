#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: index of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a, b, result;
	char *op;

	if (argc != 4)
		return (1);

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];

	result = get_op_func(op)(a, b);
	printf("%i\n", result);

	return (0);
}
