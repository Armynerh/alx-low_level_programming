#include "main.h"

/**
 * _isupper - Checks for uppercase character
 * @c: char
 * Return: 1, 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
