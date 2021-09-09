#include "main.h"

/**
 * leet - Encodes a string to 1337.
 * @st: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *st)
{
	int r, x;

	char leet[10] = "aAeEoOtTlL";
	char num[10] = "4433007711";


	for (r = 0; st[r] != '\0'; r++)
	{
		for (x = 0; x < 10; x++)
		{
			if (st[r] == leet[x])
			{
				st[r] = num[x];
			}
		}

	}
	return (st);
}
