#include "main.h"


/**
 * rot13 - Encodes a string using rot13.
 *
 * @st: String to encoded
 *
 * Return: Pointer with encoded string.
 */
char *rot13(char *st)
{
	int x;
	char alp[52] = {'A', 'B', 'C', 'D', 'E', 'F',
			'G', 'H', 'I', 'J', 'K', 'L',
			'M', 'N', 'O', 'P', 'Q', 'R',
			'S', 'T', 'U', 'V', 'W', 'X',
			'Y', 'Z', 'a', 'b', 'c', 'd',
			'e', 'f', 'g', 'h', 'i', 'j',
			'k', 'l', 'm', 'n', 'o', 'p',
			'q', 'r', 's', 't', 'u', 'v',
			'w', 'x', 'y', 'z'};
	char r13[52] = {'N', 'O', 'P', 'Q', 'R', 'S',
			'T', 'U', 'V', 'W', 'X', 'Y',
			'Z', 'A', 'B', 'C', 'D', 'E',
			'F', 'G', 'H', 'I', 'J', 'K',
			'L', 'M', 'n', 'o', 'p', 'q',
			'r', 's', 't', 'u', 'v', 'w',
			'x', 'y', 'z', 'a', 'b', 'c',
			'd', 'e', 'f', 'g', 'h', 'i',
			'j', 'k', 'l', 'm'};
	int r = 0;

	while (st[r] != '\0')
	{
		for (x = 0; x < 52; x++)
		{
			if (st[r] == alp[x])
			{
				st[r] = r13[x];
				break;
			}
		}

		r++;
	}

	return (st);
}
