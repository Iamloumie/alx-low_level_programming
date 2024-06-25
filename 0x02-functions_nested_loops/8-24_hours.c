#include "main.h"


void jack_bauer(void)
{
	int i, j;

	for (i = 0; i <= 23; i++)
	{
		for (j = i + 1; j <= 59; j++)
	  {
	  _putchar(i + '0');
	  _putchar(':');
	  _putchar(' ');
	  _putchar(j + '0');
	  }
	  _putchar('\n');
	}
}
