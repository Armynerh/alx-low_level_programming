#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: Number to get a bit
 * @index: Position
 *
 * Return: Nothing
 */
int get_bit(unsigned long int n, unsigned int index)
{

	if (index > sizeof(n) * 8)
		return (-1);

	n = (n >> index);
	n = (n & 1);

	return (n);
}
