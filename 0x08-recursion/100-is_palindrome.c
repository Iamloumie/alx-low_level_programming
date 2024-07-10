#include "main.h"
#include <string.h>

/**
 * check_palindrome - searches the integers
 * @s: incoming string
 * @start: beginning of thw string index
 * @end: end of the string index
 * Return: returns the checked integers
 */

int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
	return (1);
	}

	if (s[start] != s[end])
	{
		return (0);
	}
	return (check_palindrome(s, start + 1, end - 1));
}

/**
 * is_palindrome - checks if a string is palindrome or not
 * @s: incoming string
 * Return: returns the string palindrome
 */

int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len == 0)
	{
		return (1);
	}

	return (check_palindrome(s, 0, len - 1));
}
