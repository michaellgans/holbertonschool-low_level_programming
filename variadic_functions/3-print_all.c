#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/**
 * print_all - prints anything
 * @format: list of types
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *string;
	int x;

	x = 0;
	va_start(args, format);
	while (format != NULL && format[x] != '\0')
	{
		switch (format[x])
		{
			case 'c':
				printf("%c", (char) va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 'i':
				printf("%i", va_arg(args, int));
				break;
			case 's':
				string = va_arg(args, char *);
				if (string == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", string);
				break;
		}
		if ((format[x] == 'c'
			|| format[x] == 'i'
			|| format[x] == 'f'
			|| format[x] == 's')
			&& format[(x + 1)] != '\0')
			printf(", ");
		x++;
	}
	printf("\n");
	va_end(args);
}
