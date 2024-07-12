#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - the entry point for every C program
 * @argc: the number of command line args
 * @argv: the command line args stored in an array of strings
 * Return: returns 0 for successful compilation
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);

		printf("%d\n", a * b);
	}

	return (0);
}
