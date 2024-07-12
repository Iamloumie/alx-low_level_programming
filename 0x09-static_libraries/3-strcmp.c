#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strcmp - compares strings
 * @s1: first incoming string
 * @s2: second incoming string
 * Return: returns compared string
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
