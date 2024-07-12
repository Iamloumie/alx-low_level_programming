#include "main.h"
#include <string.h>

/**
 * _memcpy - function that copies the memory area
 * @dest: the destination string
 * @src: the source string
 * @n: the number of assigned bytes
 * Return: returns the dest string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
