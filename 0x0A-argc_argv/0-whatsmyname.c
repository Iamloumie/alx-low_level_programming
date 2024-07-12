#include "main.h"
#include <stdio.h>

/**
 * main - the entry point
 * @argc: the number of command line argument
 * @argv: the command line args stored in an array of strings
 * Return: returns 0 for successful compilation
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
