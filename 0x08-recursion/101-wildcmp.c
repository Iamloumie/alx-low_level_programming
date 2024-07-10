#include "main.h"

/**
 * wildcmp - compares string to find out wild characters
 * @s1: incoming string 1
 * @s2: incoming string 2
 * Return: returns the wild
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}

	if (*s2 == '?' || (*s1 == *s2 && *s1 != '\0'))
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}

	if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));
	}
	return (0);
}
