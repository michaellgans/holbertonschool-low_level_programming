#include "main.h"
#include "2-strlen.c"

/**
 * _strncat - entry
 * @dest: - destination
 * @scrn: - source
 * @n: - bytes
 * Return: dest
 */

char *_strncat(char *dest, char *scrn, int n)
{
	int x;
	int length = _strlen(dest);

	for (x = 0; x < n && scrn[x] != '\0'; x++, length++)
	{
		dest[length] = scrn[x];
	}
	return (dest);
}
