#include "main.h"
#include "2-strlen.c"

/**
 * _atoi - function
 * @s: var
 * Return: 0
 */

int _atoi(char *s)
{
	int operation = 1;
	unsigned int number = 0;
	char *str = s;

	while (*str != '\0' && (*str < '0' || *str > '9'))
	{
		if (*str == '-')
		{
			operation *= -1;
		}
	str++
	}
	if (*str != '\0')
	{
		while (*str >= '0' && *str <= '9')
		{
			number = number * 10 + (*str - '0');
			str++
		}
	}
	return (number * operation);
}
