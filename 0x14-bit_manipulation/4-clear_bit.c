#include "main.h"

/**
 * clear_bit - changes a 1 to 0
 * @n: the value to change
 * @index: the index at which we clear the bit
 * Return: returns 1 for success or -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	/* works even if the bit pointed at is 1 */
	*n = *n & ~(1UL << index);

	return (1);
}
