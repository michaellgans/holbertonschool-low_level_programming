#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_all - prints anything
 * @format: list of types
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int x;
	char c;
	double d;
	char *s;

	x = 0;
	va_start(args, format);
	while (format[x] != '\0')
	{
		switch (format[x])
		{
			case 'c':
				c = (char) va_arg(args, int);
				printf("%c", c);
				break;
			case 'e':
				d = va_arg(args, double);
				printf("%f", d);
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				break;
		}
		if (format[x + 1] != '\0'
			&& (format[x] == 'c'
			|| format[x] == 'e'
			|| format[x] == 'i'
			|| format[x] == 's'))
			printf(", ");
		x++;
	}
	printf("\n");
	va_end(args);
}
