#include "holberton.h"
/**
 * leet  - convert to leet 1733 code
 *@s:integer
 *
 * Return: s
 */
char *leet(char *s)

{
	int j, i;

	char leet[10] = "aAeEoOtTlL";
	char num[10] = "4433007711";


	for (j = 0; s[j] != '\0'; j++)
	{
		for (i = 0; i < 10; i++)
		{
			if (s[j] == leet[i])
			{
				s[j] = num[i];
			}
		}

	}
	return (s);
}
