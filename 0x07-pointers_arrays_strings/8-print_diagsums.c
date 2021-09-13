#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: array
 * @size: size of array
 */
void print_diagsums(int *a, int size)
{
	int row, column;
	int sum1 = 0;
	int sum2 = 0;

	for (row = 0; row < size * size; row += (size + 1))
	{
		sum1 += a[row];
	}
	for (column = size - 1; column < size * size - (size - 1);
	     column += (size - 1))
	{
		sum2 += a[column];
	}
	printf("%d, %d\n", sum1, sum2);
}
