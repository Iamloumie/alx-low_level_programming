#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: incoming dest string
 * @s2: incoming text string
 * Return: returns pointer to new_array
 */

char *str_concat(char *s1, char *s2)
{
	char *new_array;
	int i, j, len1 = 0;
	int len2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	new_array = malloc(sizeof(char) * (len1 + len2 + 1));
	if (new_array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (len1); i++)
	{
		new_array[i] = s1[i];
	}
	for (j = 0; j < len2; j++, i++)
	{
		new_array[i] = s2[j];
	}
	new_array[i] = '\0';
	return (new_array);
	free(new_array);
}
