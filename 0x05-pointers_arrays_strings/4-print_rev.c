#include "main.h"
/**
 * print_rev - Write a function that prints a string, in reverse.
 * @s: take an pointer
 */
void print_rev(char *s)
{
	int i = 0, c;

	while (s[c] != '\0')
		c++;
	c--;
	for (i = c; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}

