#include<stdio.h>

/**
 * main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int y;

	for (y = 97; y <= 122; y++)
	{
		if (y == 113 || y == 101)
		{
		continue;
		}
		putchar(y);
	}
	putchar('\n');
	return (0);
}
