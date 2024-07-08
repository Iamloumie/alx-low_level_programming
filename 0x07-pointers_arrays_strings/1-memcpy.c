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
	int dest_len = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
