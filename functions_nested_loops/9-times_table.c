#include "main.h"

/**
 * times_table - DONE
 */
void times_table(void)
{
	int x;
	int y;

	char a[] = "0,  0,  0,  0,  0,  0,  0,  0,  0,  0";
	char b[] = "0,  1,  2,  3,  4,  5,  6,  7,  8,  9";
	char c[] = "0,  2,  4,  6,  8, 10, 12, 14, 16, 18";
	char d[] = "0,  3,  6,  9, 12, 15, 18, 21, 24, 27";
	char e[] = "0,  4,  8, 12, 16, 20, 24, 28, 32, 36";
	char f[] = "0,  5, 10, 15, 20, 25, 30, 35, 40, 45";
	char g[] = "0,  6, 12, 18, 24, 30, 36, 42, 48, 54";
	char h[] = "0,  7, 14, 21, 28, 35, 42, 49, 56, 63";
	char i[] = "0,  8, 16, 24, 32, 40, 48, 56, 64, 72";
	char j[] = "0,  9, 18, 27, 36, 45, 54, 63, 72, 81";

	for (y = 0; y < 10; y++)
	{
		for (x = 0; x < 38; x++)
		{
		_putchar(a[x]);
		_putchar(b[x]);
		_putchar(c[x]);
		_putchar(d[x]);
		_putchar(e[x]);
		_putchar(f[x]);
		_putchar(g[x]);
		_putchar(h[x]);
		_putchar(i[x]);
		_putchar(j[x]);
		}
	_putchar('\n');
	}
}
