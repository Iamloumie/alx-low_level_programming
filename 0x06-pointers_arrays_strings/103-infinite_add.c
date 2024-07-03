#include "main.h"

/**
 * infinite_add - adds the integers
 * @n1: incoming character 1
 * @n2: incoming character 2
 * @r: incoming buffer
 * @size_r: the buffer size
 * Return: returns char
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, carry = 0, sum, i, j;

	while (n1[len1] != '\0')
	{
		len1++;
	}
	while (n2[len2] != '\0')
	{
		len2++;
	}
	if (len1 + 1 > size_r || len2 + 1 > size_r)
		return (0);
	r[size_r - 1] = '\0';
	i = len1 - 1;
	j = len2 - 1;
	size_r -= 2;
	while (i >= 0 || j >= 0 || carry)
	{
		sum = carry;
		if (i >= 0)
		{
			sum += n1[i] - '0';
		}
		if (j >= 0)
		{
			sum += n2[j] - '0';
		}
		if (size_r < 0)
			return (0);
		r[size_r] = (sum % 10) + '0';
		carry = sum / 10;

		i--;
		j--;
		size_r--;
	}
	return (&r[size_r + 1]);
}
