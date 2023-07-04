#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - adds a bunch of ints
 * @n: first int
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum, x;
	va_list ptr;

	sum = 0;

	va_start(ptr, n);

	for (x = 0; x < n; x++)
		sum += va_arg(ptr, int);

	va_end(ptr);

	return (sum);
}
