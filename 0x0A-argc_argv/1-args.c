#include "main.h"
#include <stdio.h>

/**
 * main - the entry point for every C program
 * @argc: the number of command line args
 * @argv: the command line args stored in an array of strings
 * Return: returns 0 for successful compilation
 */
int main(int argc, char *argv[])
{
	(void)argv;
	if (argc > 0)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
