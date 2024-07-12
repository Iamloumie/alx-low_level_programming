#include "main.h"

/**
  * _strpbrk - locates the first occurrence in a str
  * @s: the string to search
  * @accept: the chars to search
  * Return: returns the letters and a terminator
  */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	/*iterate through the original str*/
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}

	/*return the terminator since didnt check that far*/
	return ('\0');
}
