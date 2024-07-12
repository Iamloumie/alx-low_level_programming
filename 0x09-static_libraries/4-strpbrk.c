#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches for a string for any set of byte
 * @s: incoming string
 * @accept: incoming compared string
 * Return: return string
 */
char *_strpbrk(char *s, char *accept)
{
	char *a;

	while (*s)
	{
		for (a = accept; *a; a++)
		{
			if (*s == *a)
			{
			return (s);
			}
		}
		s++;
	}
	return (NULL);
}
