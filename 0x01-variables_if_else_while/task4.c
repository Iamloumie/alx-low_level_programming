#include <stdio.h>

int main(void)
{
	char a, b;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
		putchar('\n');

	for (b = 'A'; b <= 'Z'; b++)
	{
		putchar(b);
	}

	return (0);
}
