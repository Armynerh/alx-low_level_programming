#include "main.h"
#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	long i_count;
	long largest = 612852475143;
	long upper = 0;

	for (i_count = 2 ; i_count <= largest; i_count++)
	{
		if (largest % i_count == 0)
		{
			if (i_count > upper)
			{
				upper = i_count;
				largest = (largest / i_count);
				i_count--;
			}
		}
	}
	printf("%ld\n", upper);
	return (0);
}
