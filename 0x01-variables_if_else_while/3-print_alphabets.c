#include <stdio.h>
/* more headers goes there */
/**
 * main - main block
 * Use the function puts
 * You are not allowed to use printf
 * Description: Use `putchar` to print lowercase and then uppercase alphabet.
 * Return: 0
 */
/* betty style doc for function main goes there */
int main(void)
{
	char c, d;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (d = 'A'; d <= 'Z'; d++)
		putchar(d);
	putchar('\n');
	return (0);
}
