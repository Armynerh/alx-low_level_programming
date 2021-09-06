#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: char
 * @x
 * Return: int
 */

int _strlen(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; )
	{
		x++;
	}

	return (x);
}
