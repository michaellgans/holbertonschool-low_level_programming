#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - entry point
 * @argc: stuff
 * @argv: things
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x;
	unsigned int y, result = 0;
	char *ptr;

	if (argc > 1)
	{
		for (x = 1; x < argc; x++)
		{
			ptr = argv[x];
			for (y = 0; y < strlen(ptr); y++)
			{
				if (ptr[y] < 48 || ptr[y] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			result += atoi(ptr);
			ptr++;
		}
		printf("%i\n", result);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
