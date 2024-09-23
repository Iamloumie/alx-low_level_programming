#include "main.h"

/**
 * _isupper - checks if if a character is uppercase
 * @c: the incoming character
 * Return: 1 if its an uppercase
 */
int _isupper(int c)
{
		if (c >= 65 && c <= 90)
		{
			return (1);
		}
	return (0);
}
