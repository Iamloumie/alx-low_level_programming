#include "main.h"

/**
 * binary_to_uint - converts binary numbers to unsigned int
 * @b: contains the 0 and 1 characters
 * Return: the unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	int i = strlen(b) - 1;
	unsigned int decimal = 1, total = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (; i >= 0; i--)
	{
		if (b[i] != '1' && b[i] != '0')
		{
			return (0);
		}
		if (b[i] == '1')
		{
			total += decimal;
		}
		decimal = decimal * 2;
	}
	return (total);
}
