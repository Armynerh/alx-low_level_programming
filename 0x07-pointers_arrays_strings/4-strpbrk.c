#include "main.h"

/**
 * *_strpbrk - Searches a string for any of a set of bytes
 * @s: Char pointer
 * @accept: Character for found
 * @l
 * Return: c or null
 */

char *_strpbrk(char *s, char *accept)
{
	int ls, la;

	for (ls = 0; s[ls]; ls++)
	{
		for (la = 0; accept[la]; la++)
		{
			if (s[ls] == accept[la])
				return (s + ls);
		}
		if (s[ls] == accept[la])
			return (s + ls);
	}

	return ('\0');
}
