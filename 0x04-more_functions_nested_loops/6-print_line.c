#include "main.h"

/**
 * print_line - prints a straight line in the terminal
 * @n: the incoming number of times the _ should be printed
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
