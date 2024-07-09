#include "main.h"

/**
 * set_string - function that changes pointers
 * @s: pointer pointing to to
 * @to: incoming string
 */

void set_string(char **s, char *to)
{
	*s = to;
}
