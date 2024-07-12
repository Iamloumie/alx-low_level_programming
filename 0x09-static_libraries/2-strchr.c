#include "main.h"
#include <stddef.h>

/**
 * _strchr - function that locates a character in a string
 * @s: the string to be searched
 * @c: the character being searched for
 * Return: char after the char is found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
	s++;
	}

	if (c == '\0')
	{
		return (s);
	}

	return (NULL);
}
