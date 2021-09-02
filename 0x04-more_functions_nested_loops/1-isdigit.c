#include "main.h"

/**
 * _isdigit - Checks for digit character
 * @c: int
 * Return: 1, 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
