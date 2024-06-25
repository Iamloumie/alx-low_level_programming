#include <stdio.h>

int main(void)
{
	int b;
	for (b = 0; b <= 9; b++)
	{
		putchar(b + '0');
		if (b <= 8)
		{
		putchar(',');
		putchar(' ');

		}
	}
	return (0);
}
