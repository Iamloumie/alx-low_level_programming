#include "main.h"

/**
 * print_last_digit - prints the last digit of a given number
 * @n: the incoming number
 * Return: returns the last digit of the last
 */

int print_last_digit(int n)
{
	int k;

	if (n < 0)
	{
		k = -1 * (n % 10);
		return (k);
	}
	else
	{
		k = n % 10;
		return (k);
	}
}
