#include "main.h"

/**
 * *_memset - Fills memory with a constant byte
 * @s: Pointer to memory area
 * @b: Constant byte
 * @n: First bytes of the memory area pointed to by s
 * Return: Pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int l;

	for (l = 0; l < n ; l++)
	{
		s[l] = b;
	}

	return (s);

}
