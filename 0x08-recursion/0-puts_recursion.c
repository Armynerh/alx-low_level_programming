#inclide "main.h"

/**
* _puts_recursion - prints a string, followed by a new line
* @s: pointr to memory area
* Return: Always 0
*/

void _puts_recursion(char *s);	
{
	if (*s != '\0')
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{	
		putchar('\n');
	}
}
