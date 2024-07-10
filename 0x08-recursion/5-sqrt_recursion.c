#include "main.h"

/**
 * sqrt_recursion_helper - uses the binary search on integers
 * @n: incoming integer
 * @start: the beginning of the integer range
 * @end: end of the range
 * _sqrt_recursion - calculates natural squareroot
 * Return: returns the result
 */

int sqrt_recursion_helper(int n, int start, int end)
{
	int mid = (start + end) / 2;
	long square = (long)mid * mid;

	if (start > end)
	{
		return (-1);
	}

	if (square == n)
	{
		return (mid);
	}
	if (square > n)
	{
		return (sqrt_recursion_helper(n, start, mid - 1));
	}
	return (sqrt_recursion_helper(n, mid + 1, end));
}

/**
 * _sqrt_recursion - calculates natural squareroot
 * @n: incoming integer
 * Return: returns the result
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}

	return (sqrt_recursion_helper(n, 1, n / 2));
}
