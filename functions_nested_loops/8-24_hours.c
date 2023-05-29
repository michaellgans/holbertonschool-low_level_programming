#include "main.h"

/**
 * jack_bauer - DONE
 */
void jack_bauer(void)
{
	int H;
	int M;
	int m;

	H = 0;
	M = 0;
	m = 0;

	while (H < 24)
	{
		H++;
		_putchar('0' + H);
		_putchar(':');
		_putchar('0' + M);
		_putchar('0' + m);
		_putchar('\n');
	}
}
