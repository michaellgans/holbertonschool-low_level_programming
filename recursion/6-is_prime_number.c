#include "main.h"

/**
 * is_prime_number - is number prime?
 * @n: da number
 * Return: 1
 */

int is_prime_number(int n)
{
	return (_prime_helper(n, n - 1));
}

/**
 * _prime_helper - recursion
 * @n: number in question
 * @test: divided by
 * Return: 1
 */

int _prime_helper(int n, int test)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (test == 1)
	{
		return (1);
	}
	else if (n % test == 0)
	{
		return (0);
	}
	else
	{
		return (_prime_helper(n, test - 1));
	}
}
