#include "main.h"
#include <stdio.h>
/**
* program that prints the number of arguments passed into it
*@argc: prints number of arguments
*@argv: prints strings
*Return: Always 0
*/ 

int main(int argc, char* argv[])
{
	(void)argv;
	argc--;
	
	printf("%d\n", argc);
	return 0;
}
