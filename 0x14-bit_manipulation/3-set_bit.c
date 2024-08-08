#include "main.h"

/**
 * set_bit- sets the value of bit to 1 at givin index
 * @n: incoming integer
 * @index: index of the bit to be set
 * Return: 1 on sucess
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
	/* Index is out of range */
		return (-1);
	}

	*n |= (1UL << index);
	return (1);
}
