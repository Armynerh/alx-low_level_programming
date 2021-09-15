#include "main.h"

/**
 *Factorial- Returns the factorial of a given number
 *@n: the number to calculate the factorial
 *Returns: int
 */

int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}
	else if (n < 0)
		return (-1);

	return (n * factorial(n - 1);
}
