#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 * print_numbers - prints numbers
 * @separator: what separates the ints
 * @n: first int
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	int number;
	va_list ptr;

	if (separator == NULL)
		exit(1);

	va_start(ptr, n);

	for (x = 0; x < n; x++)
	{
		number = va_arg(ptr, int);
		printf("%i", number);

		if (separator != NULL && x < n - 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(ptr);
}
