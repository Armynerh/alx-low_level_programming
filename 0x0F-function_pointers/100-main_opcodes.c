#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the opcodes
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Always 0 (Sucess)
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	return (0);
}
