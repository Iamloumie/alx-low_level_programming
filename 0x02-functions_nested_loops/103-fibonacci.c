#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	long fib1 = 1, fib2 = 2;
	long next_fib, sum_even = 0;

	printf("%ld, %ld", fib1, fib2);

	if (fib2 % 2 == 0 && fib2 <= 4000000)
	{
		sum_even += fib2;
	}
	while (fib2 <= 4000000)
	{
		next_fib = fib1 + fib2;
		fib1 = fib2;
		fib2 = next_fib;

		printf("%ld\n", fib2);

		if (fib2 % 2 == 0 && fib2 <= 4000000)
		{
			sum_even += fib2;
		}
	}

	printf("%ld\n", sum_even);

	return (0);
}
