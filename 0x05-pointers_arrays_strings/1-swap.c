#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * swap: swaps the values
 * @a: first incoming integer
 * @b: second incoming integer
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

