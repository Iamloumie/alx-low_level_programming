#include "main.h"

/**
 * _pow_recursion - calculates power arithmetic
 * @x: incoming base integer
 * @y: incoming superscript integer
 * Return: returns the result
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y == 1)
	{
		return (x);
	}
	return (x * _pow_recursion(x, y - 1));
}
