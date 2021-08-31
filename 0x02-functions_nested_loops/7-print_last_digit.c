#include "main.h"
/**
  * print_last_digit - function that prints the last digit
  * @n: takes a int
  * Return: returns
  */
int print_last_digit(int n)
{
	int num = n % 10;

	if (n < 0)
		num = num * -1;
	_putchar(num + '0');
	return (num);
}
