#include <stdio.h>
/* more headers goes there */
/**
 * main - main block
 * Use the function puts
 * You are not allowed to use printf
 * Description: Use `putchar` to print all letters but the letter 'q' and 'e'.
 * Return: 0
 */
/* betty style doc for function main goes there */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
			putchar(c);
	}
	putchar('\n');
	return (0);
}
