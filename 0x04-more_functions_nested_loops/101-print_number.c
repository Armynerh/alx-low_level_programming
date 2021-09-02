#include "main.h"
/**
 * print_number - print an integer
 * @n: value
 *
 */
void print_number(int n)
{
	unsigned int num;
	int b, m;

	if (n >= 0 && n < 10)
	{
		_putchar(n + 48);
	}
	else if (n < 0 && n > -10)
	{
		n *= -1;
		_putchar('-');
		_putchar(n + 48);
	}
	else
	{
		if (n < 0)
		{
			n *= -1;
			_putchar('-');
		}
		b = 10;
		num = n;
		while (num / b > 9)
		{
			b = b * 10; 
		}
		while (b > 0)
		{
			m = num / b;
			num = num % b;
			_putchar(m + 48);
			b = b / 10;
		}
	}
}
