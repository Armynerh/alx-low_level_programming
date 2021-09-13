#include "main.h"

/**
 * _strspn - Gets the lenght of a prefix substring
 * @s: Char pointer
 * @accept: Substring
 * @ls
 * @la
 * @b
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int ls;
	unsigned int la;
	unsigned int b = 0;

	for (ls = 0; s[ls]; ls++)
	{
		for (la = 0; accept[la]; la++)
		{
			if (accept[la] == s[ls])
			{
				b++;
				break;
			}
		}
		if (accept[la] != s[ls])
			break;
	}
	return (b);
}
