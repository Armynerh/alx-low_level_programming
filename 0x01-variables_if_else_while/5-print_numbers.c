#include <stdio.h>
/* more headers goes there */
/**
 * main - main block
 * Use the function puts
 * You are not allowed to use printf
 * Description: Print all numbers of base 10, starting from 0.
 * Return: 0
 */
/* betty style doc for function main goes there */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		printf("%d", i);
	printf("\n");
	return (0);
}
