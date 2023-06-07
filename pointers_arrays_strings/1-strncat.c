#include "main.h"
#include "2-strlen.c"

/**
 * _strncat - entry
 * @dest - destination
 * @src - source
 * @n - bytes
 * Return: dest
 */

char *_strncat(char *dest, char *scrn, int n)
{
	int x;
	int length = _strnlen(dest);

	for (x = 0; src[x] != '\0'; x++, length++)
