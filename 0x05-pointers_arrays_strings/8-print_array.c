#include "main.h"
#include <stdio.h>

/**
 * print_array - prints the elements of the array integers
 * @a: incoming integer
 * @n: incoming number of integer to be printed
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(",");
		}
	}
	printf("\n");
}
