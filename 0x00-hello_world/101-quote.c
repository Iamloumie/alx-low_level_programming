#include<string.h>
#include<stdio.h>
#include<unistd.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
	*/
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19,\n";

	write(1, str, strlen(str) - 1);
	return (1);

}
