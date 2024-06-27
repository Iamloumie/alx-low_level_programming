#include "main.h"

/**
 * print_square - prints the square
 * @size: the size of the square
 */

void print_square(int size)
{
	int row, col;

	if (size < 1)
	{
		_putchar('\n');
	}

	for (row = 0; row < size; row++)
	{
		for (col = 0; col < size; col++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
