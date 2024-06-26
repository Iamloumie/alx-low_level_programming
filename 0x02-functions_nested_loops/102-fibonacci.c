#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int fib_count = 50;
	int fib1 = 1, fib2 = 2;
	int next_fib, i;

	printf("%d, %d", fib1, fib2);

	for (int i = 3; i <= fib_count; i++)
	{
		next_fib = fib1 + fib2;
		printf(", %d", next_fib);
		fib1 = fib2;
		fib2 = next_fib;
	}

	printf("\n");

	return (0);
}
