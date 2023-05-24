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

	printf("Size of a char: %lu byte(s).\n", (unsigned long)sizeof(c));
	printf("Size of a int: %lubyte(s).\n", (unsigned long)sizeof(i));
	printf("Size of a long int %lubyte(s).\n", (unsigned long)sizeof(l));
	printf("Size of a long long int: %lubyte(s).\n", (unsigned long)sizeof(d));
	printf("Size of a float: %lubyte(s).\n", (unsigned long)sizeof(f));
	return (0);
}
