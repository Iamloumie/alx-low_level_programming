#include "main.h"

/**
 * times_table - prints the multiplication table
 */


void times_table(void)
{
	int j, res;

	for (j = 1; j <= 12; j++)
	{
		res = 9 * j;
		if (res >= 10)
		{
			_putchar((res / 10) + '0');
			_putchar((res / 10) + '0');
		}
		else
		{
			_putchar(res + '0');
		}
		if (j < 12)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
