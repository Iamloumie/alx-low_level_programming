#include<stdio.h>

/**
 * main -Entry point
 *
 *Return: Always 0 (Success)
 */
#include <stdio.h>

int main(void)
{
	int x;
	int y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			if (x < y)
			{
				putchar(x + '0');
				putchar(y + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

