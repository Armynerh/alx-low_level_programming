#include "main.h"

/**
* _puts_recursion - Prints a string with recursion
* @s: Pointer to memory area
*/
 
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		 _puts_recursion(s + 1);
		_putchar(*s)
	}	
}               
