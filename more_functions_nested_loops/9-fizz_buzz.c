#include "main.h"

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int x = 1;

	for (x = 1; x < 101; x++)
	{
		if (x % 3 == 0 && x % 5 == 0)
		{
			printf("FizzBuzz ");
			continue;
		}
		else if (x % 3 == 0)
		{
			printf("Fizz ");
			continue;
		}
		else if (x % 5 == 0)
		{
			printf("Buzz ");
			continue;
		}
	printf("%i ", x);
	}
	putchar('\n');
	return (0);
}
