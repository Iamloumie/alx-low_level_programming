#include "main.h"
#include <stdio.h>

/**
 * get_bit - gets the bit at index
 * @n: the number in dec
 * @index: the index from which to get the bit
 * Return: the bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		/* Index is out of range */
		return (-1);
	}

	return ((n >> index) & 1);
}
