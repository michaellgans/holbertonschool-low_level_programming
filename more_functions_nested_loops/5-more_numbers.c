#include "main.h"

/**
 * more_numbers - prints numbers
 */

void more_numbers(void)

{
	char x;
	char y;

	for (y = 0; y <= 10; y++)
	{
		for (x = 0; x <= 14; x++)
		{
			putchar(x);
		}
		putchar('\n');
	}
}
