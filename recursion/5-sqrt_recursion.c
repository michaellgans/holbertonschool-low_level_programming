#include "main.h"

/**
 * _sqrt_recursion - returns the square root of a number
 * @n: the number
 * Return: 0
 */

int _sqrt_recursion(int n)
{
	if (n <= 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		int guess = n / 2;
		int new_guess = (guess + n / guess) / 2;

	if (new_guess >= guess)
	{
		return (guess);
	}

	return (_sqrt_helper(n, n / 2));
	}
}

/**
 * _sqrt_helper - makes guesses
 * @n: number
 * @guess: first guess
 * Return: 0
 */

int _sqrt_helper(int n, int guess)
{
	int new_guess = (guess + n / guess) / 2;

	if (new_guess >= guess)
	{
		return (guess);
	}
	else
	{
		return (_sqrt_helper(n, new_guess));
	}
}
