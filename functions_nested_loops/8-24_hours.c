#include "main.h"

/**
 * jack_bauer - DONE
 */
void jack_bauer(void)
{
	int H;
	int h;
	int M;
	int m;

	H = 0;
	h = 0;
	M = 0;
	m = -1;

	while (M < 5)
	{
		M++;
		_putchar('0' + H);
		_putchar('0' + h);
		_putchar(':');
		_putchar('0' + M);
		_putchar('0' + m);
		while (m < 9)
		{
			m++;
			_putchar('0' + H);
			_putchar('0' + h);
			_putchar(':');
			_putchar('0' + M);
			_putchar('0' + m);
			_putchar('\n');
		}
	}
}
