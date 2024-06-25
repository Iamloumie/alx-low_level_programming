#include "main.h"

/**
 * times_table - prints the multiplication table from 0 to 9
 */
void times_table(void)
{
	int i, j, res;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			res = i * j;

			if (j != 0)
			{
				_putchar(' ');
			if (res < 10)
				{
				_putchar(' ');
				}
			}

			if (res < 10)
			{
				_putchar(res + '0');
			}
			else
			{
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}

			if (j < 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
