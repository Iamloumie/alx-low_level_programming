#include "main.h"

/**
 * _isdigit - prints if the incoming character is a digit
 * @c: the incoming character
 * Return: returns 1 if the incoming character is a digit a digit
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
