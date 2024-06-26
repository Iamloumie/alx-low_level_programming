#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int limit = 1024;
	int sum = 0;

	for (i = 1; i < limit; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}

	printf("Sum of multiples of 3 or 5 below %d: %d\n", limit, sum);

	return (0);
}
