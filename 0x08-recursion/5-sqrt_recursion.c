#include "main.h"

int square_root(int n, int i);

/**
 *
 *
 *
 */

int _sqrt_recursion(int n)
{
	int res = 0;
	int i = 1;

	res = square_root(n, i);

	if (res == -1)
		return (-1);
	else
		return (res);
}

/**
 * square_root - Calculate the square root of a number
 * @n: Number to evaluate
 * @i: Iterator
 * Return: int
 */

int square_root(int n, int i)
{
	if (n / i == i && n % i == 0)
		return (i);
	if (n / i < i)
		return (-1);
	i = square_root(n, i + 1);
	return (i);
}
