#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat - concatenates two strings
 * @dest: incoming destination string
 * @src: incoming source string
 * Return: returns a char
 */

char *_strcat(char *dest, char *src)
{
	int length_dest = strlen(dest);
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[length_dest + i] = src[i];
	}
	dest[length_dest + i] = '\0';

	return (dest);
}
