#include "main.h"

/**
 * print_line - prints a straight line in the terminal
 * @n: the incoming number of times the _ should be printed
 */

void print_line(int n)
{
	int i = 0;

	while (n > i)
	{
		_putchar('_');
		i++;
	}

	_putchar('\n');
}
