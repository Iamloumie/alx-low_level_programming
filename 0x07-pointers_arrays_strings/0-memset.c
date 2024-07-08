#include "main.h"

/**
 * _memset - function that fills the memory
 * @s: the string address
 * @b: the char to be put in the string
 * @n: the number of bytes to be allocated
 * Return: returns the string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
