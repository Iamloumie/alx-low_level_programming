#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - finds the largest prime factor of a number
 * @n: the number to find the largest prime factor of
 * Return: the largest prime factor
 */

long largest_prime_factor(long n)
{
	long largest = -1;
	long i;

/**
 * Remove all factors of 2
 */
	while (n % 2 == 0)
	{
		largest = 2;
		n = n / 2;
	}

/**
 * Check for odd factors up to sqrt(n)
 */
	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			largest = i;
			n = n / i;
		}
	}
/**
 * If n is still greater than 2, it is prime
 */
	if (n > 2)
		largest = n;

	return largest;
}

/**
 * main - entry point of the program
 * Return: Always 0
 */
int main(void)
{
	long number = 612852475143;
	long result = largest_prime_factor(number);

	printf("%ld\n", result);

	return 0;
}
