#include "main.h"

/**
 * more_numbers - prints numbers
 */

void more_numbers(void)

{
	int x;
	int y;
	char c[] = "01234567891011121314";

	for (y = 0; y <= 10; y++)
	{
		for (x = 0; x <= 15; x++)
		{
			putchar(c[x]);
		}
		putchar('\n');
	}
}
