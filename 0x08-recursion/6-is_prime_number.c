#include "main.h"

/**
 * is_prime_helper - looks through range of integers
 * @n: incoming integer
 * @divisor: divides the integers to get a remainder
 * Return: returns the result
 */

int is_prime_helper(int n, int divisor)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	if (n % 2 == 0)
	{
		return (0);
	}

	if (divisor * divisor > n)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}

	return (is_prime_helper(n, divisor + 2));
}
/**
 * is_prime_number - finds the prime number
 * @n: incoming integer
 * Return: returns the prime number
 */
int is_prime_number(int n)
{
	return (is_prime_helper(n, 3));
}
