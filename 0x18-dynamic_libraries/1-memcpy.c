#include "main.h"

/**
  * _memcpy - copies the memory region of src to dest
  * @dest: the destination for th3 copied memory
  * @src: the origin of th3 copied memory
  * @n: the length of the memory to copy
  * Return: the new destination with the copied memory
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
