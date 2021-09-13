#include "main.h"

/**
 * *_strchr - Locates a character in a string
 * @s: Char pointer
 * @c: Character for found
 * @l
 * Return: c or null
 */

char *_strchr(char *s, char c)
{
	int l;

	for (l = 0; s[l]; l++)
	{
		if (s[l] == c)
			return (s + l);
	}
	if (s[l] == c)
		return (s + l);

	return ('\0');
}
