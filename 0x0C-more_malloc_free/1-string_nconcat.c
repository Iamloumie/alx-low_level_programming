#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: incoming destination string
 * @s2: incoming source string
 * @n: size of the string
 * Return: returns the destination string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_array;
	unsigned int i, j, len1 = 0, len2 = 0;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = " ";
		s2 = " ";
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (len2 < n && s2[len2])
	{
		len2++;
	}

	if (n >= len2)
	{
		n = len2;
	}
	new_array = malloc(sizeof(char) * (len1 + n + 1));
	if (new_array == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		new_array[i] = s1[i];
	}
	for (j = 0; j < n; j++, i++)
	{
		new_array[i] = s2[j];
	}
	new_array[i] = '\0';

	return (new_array);
	free(new_array);
}
