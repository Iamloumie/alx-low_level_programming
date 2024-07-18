#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: incoming integer
 * Return: returns the memory or exit with 98 on failure
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
