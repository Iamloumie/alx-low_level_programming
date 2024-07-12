#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - the entry point for every C program
 * @argc: the number of command line args
 * @argv: the command line args stored in an array of strings
 * Return: returns 0 for successful compilation
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int input = atoi(argv[1]);

		if (input < 0)
			printf("0\n");
		else
			printf("%d\n", coins_count(input));
	}

	return (0);
}

/**
 * coins_count - calculates the number of coins needed
 * @amount: the amount
 * Return: returns the number of coins needed
 */
int coins_count(int amount)
{
	int num = 0, temp = 0;

	/**
	 * could be optimised further to be honest
	 * will take a look at this later
	 */
	while (amount > 0)
	{
		if (amount >= 25)
		{
			temp = amount / 25;
			amount -= temp * 25;
			num += temp;
		}
		else if (amount >= 10)
		{
			temp = amount / 10;
			amount -= temp * 10;
			num += temp;
		}
		else if (amount >= 5)
		{
			temp = amount / 5;
			amount -= temp * 5;
			num += temp;
		}
		else if (amount >= 2)
		{
			temp = amount / 2;
			amount -= temp * 2;
			num += temp;
		}
		else
		{
			num += 1;
			break;
		}
	}

	return (num);
}
