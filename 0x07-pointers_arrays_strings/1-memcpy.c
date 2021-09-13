#include "main.h"

/**
 * *_memcpy - Copies memory area
 * @src: Pointer to memory area
 * @dest: Pointer where copy memory area from src
 * @n: Bytes of the memory area
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int l;

	for (l = 0; l < n; l++)
	{
		dest[l] = src[l];
	}

	return (dest);
}
