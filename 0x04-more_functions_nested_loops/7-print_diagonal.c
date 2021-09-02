#include "main.h"

/**
 * print_diagonal - Write a function that draws a diagonal line
 * @n: take an int
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 2; j < i + 1; j++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
