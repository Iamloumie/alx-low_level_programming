#include "main.h"

/**
 * print_triangle - prints a tranglr followed by a new line
 * @size: the incoming size of the triangle
 */

void print_triangle(int size)
{
	int row, col, space;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (row = 1; row <= size; row++)
	{
		for (space = size - row; space > 0; space--)
		{
			_putchar(' ');
		}
		for (col = 1; col <= row; col++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
