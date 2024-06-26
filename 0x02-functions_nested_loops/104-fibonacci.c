#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long fib1 = 1, fib2 = 2;
	long next_fib;
	int i;

	printf("%ld, %ld", fib1, fib2);

	for (i = 3; i <= 98; i++)
	{
		next_fib = fib1 + fib2;
		printf(",l%d", next_fib);

		fib1 = fib2;
		fib2 = next_fib;
	}
	printf("\n");

	return (0);
}
