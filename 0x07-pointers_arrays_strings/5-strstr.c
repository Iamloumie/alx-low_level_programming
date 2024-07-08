#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: incoming mother string
 * @needle: incoming child string
 * Return: returns mother string
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			return (haystack);
		}
	haystack++;
	}

	if (*needle == '\0')
	{
		return (haystack);
	}
	return (NULL);

}
