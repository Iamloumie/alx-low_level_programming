#include "main.h"

/**
  * _strncat - uses at most n bytes from src
  * @dest: the dest str
  * @src: the source str
  * @n: the bytes from src
  * Return: returns the new dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int len, i;

	len = 0;
	while (dest[len] != '\0')
		len++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[len + i] = src[i];

	dest[len + i] = '\0';

	return (dest);
}
