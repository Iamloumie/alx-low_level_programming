#include <stdio.h>

/**
 * main - Entry point
 *line 21 Print the tens digit of x
 *line 22 Print the units digit of x
 *line 24 Print the tens digit of y
 *line 25  Print the units digit of y
 *line 27  Avoid printing a comma and space after the last combination
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, y;

	for (x = 0; x <= 99; x++)
	{
		for (y = x + 1; y <= 99; y++)
		{
		putchar((x / 10) + '0');
		putchar((x % 10) + '0');
		putchar(' ');
		putchar((y / 10) + '0');
		putchar((y % 10) + '0');

		if (x != 98 || y != 99)
		{
			putchar(',');
			putchar(' ');
		}
		}
	}
	putchar('\n');
	return (0);
}
