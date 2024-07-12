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
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
