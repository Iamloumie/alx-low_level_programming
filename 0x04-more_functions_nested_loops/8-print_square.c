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
		return; // added the return so that if the condition of less than 1 is not met, it should exit the loop without having to run the for
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
