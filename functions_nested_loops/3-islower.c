#include "main.h"
#include <unistd.h>
/**
 * _islower - DONE
 *
 * @c: DONE
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		putchar('1');
	}
	else
	{
		putchar('0');
	}

	return (0);
}
