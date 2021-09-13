#include "main.h"

/**
 * _strstr - tha locates a substring
 * @haystack: this is the main c string to be scanned
 * @needle: this is the small string to be searched with-in haystack
 *
 * Return: pointer to beginning of the located substring 0
 */
char *_strstr(char *haystack, char *needle)
{
	int i, b, a;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (a = i, b = 0; needle[b] != '\0'; b++, a++)
		{
			if (needle[b] != haystack[a] || haystack == '\0')
			{
				break;
			}
		}
		if (needle[b] == '\0')
		{
			return (haystack + i);
		}
	}
	return ('\0');
}
