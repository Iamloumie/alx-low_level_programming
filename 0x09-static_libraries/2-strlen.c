#include "main.h"

/**
 * _strlen - funtion that calculates the number of characters of a string
 *@s: incoming string
 *Return: returns the length of the string
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
