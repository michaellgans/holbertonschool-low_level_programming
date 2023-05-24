#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;
	int i;
	long l;
	double d;
	float f;

	printf("Size of a char: %lu(s).\n", (unsigned long)sizeof(c));
	printf("Size of a int: %lu(s).\n", (unsigned long)sizeof(i));
	printf("Size of a long int %lu(s).\n", (unsigned long)sizeof(l));
	printf("Size of a long long int: %lu(s).\n", (unsigned long)sizeof(d));
	printf("Size of a float: %lu(s).\n", (unsigned long)sizeof(f));
	return (0);
}
