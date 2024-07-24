#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints the name
 * @name: incoming name
 * @f: points to the print_name function
 */

void print_name(char *name, void (*f)(char *))
{
	if (f)
	{
		f(name);
	}
}
