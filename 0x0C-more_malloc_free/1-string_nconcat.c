#include "main.h"
#include <stdlib.h>

/**
 * _strlen - string length
 * @str: string
 * Return: length string
 * *string_nconcat - string concatenation
 * @s1: char 1
 * @s2: char 2
 * @n: number
 * Return: new string
 */
unsigned int _strlen(char *str)
{
	unsigned int con = 0;

	while (str[con] != 0)
		con++;
	return (con);
}


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newstrn;
	unsigned int strlen_s1;
	unsigned int strlen_s2;
	unsigned int _malloc, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	strlen_s1 = _strlen(s1);
	strlen_s2 = _strlen(s2);

	if (n >= strlen_s2)
		_malloc = strlen_s1 + strlen_s2;
	else
		_malloc = strlen_s1 + n;

	newstrn = malloc(sizeof(char) * (_malloc + 1));
	if (newstrn == NULL)
		return (NULL);
	for (i = 0; i < _malloc; i++)
	{
		if (i < strlen_s1)
			newstrn[i] = s1[i];
		else
			newstrn[i] = s2[i - strlen_s1];
	}
	newstrn[i] = '\0';
	return (newstrn);
}
