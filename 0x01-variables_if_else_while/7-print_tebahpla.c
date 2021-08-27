#include <stdio.h>
/* more headers goes there */
/**
 * main - main block
 * Description: Print the alphabet in reverse order in lowercase.
 * Return: 0
 */
/* betty style doc for function main goes there */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
		putchar('\n');
		return (0);
}
