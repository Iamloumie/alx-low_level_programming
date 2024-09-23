#include "main.h"

/**
* _islower - checks the lowercase alphabet in the program
* @c: the incoming char
* Return: returns 0 or 1
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
