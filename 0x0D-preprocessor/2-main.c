#include "main.h"
#include <stdlib.h>

/**
 * main - entry point of the program
 * Return: returns 0, always successful
 */

int main(void)
{
	char *filename = __FILE__;
	int i = 0;

	while (filename[i])
	{
		_putchar(filename[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
