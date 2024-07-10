#include "main.h"

/**
 * factorial - calculates the factorial of integers
 * @n: incoming integer
 * Return: returns the result
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
