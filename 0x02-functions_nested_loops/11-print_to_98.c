#include "main.h"
#include <stdio.h>

/**
  * print_to_98 - prints from n to 98
  * @n: the input to be printed from
  */
void print_to_98(int n)
{
	int m;

	m = n;
	if (m > 98)
	{
		while (m > 97)
		{
			if (m != 98)
			{
				printf("%d, ", m);
			}
			else
			{
				printf("%d\n", m);
			}
			m--;
		}
	}
	else
	{
		for (m = n; m <= 98; m++)
		{
			if (m != 98)
			{
				printf("%d, ", m);
			}
			else
			{
				printf("%d\n", m);
			}
		}
	}
}
