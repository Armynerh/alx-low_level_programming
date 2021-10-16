#include "main.h"

/**
 * print_binary - prints the binary of a decimal
 * @n: Number to convert
 *
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	if (n <= 1)
	{
		_putchar((n & 1) + 48);
		return;
	}

	print_binary(n >> 1);
	_putchar(48 + (n & 1));
}
