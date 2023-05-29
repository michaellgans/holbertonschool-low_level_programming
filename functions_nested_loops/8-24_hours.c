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
	m = 0;

	while (H < 3)
	{
		_putchar(H);
		_putchar(h);
		_putchar(M);
		_putchar(m);
		H++;
	}
	_putchar('\n');
}
