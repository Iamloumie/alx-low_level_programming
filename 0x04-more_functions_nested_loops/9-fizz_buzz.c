#include <stdio.h>

/**
 * main - look up fizzbuzz lol
 * Return: returns 0
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", a);
		}
	}
	printf("\n");

	if (a < 100)
	{
		printf(" ");
	}
	return (0);
}
