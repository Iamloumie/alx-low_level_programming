#include <stdio.h>

int main(void)
{
	int a;
	printf("the numbers are ");
	
	for (a = 5; a > 0;)
	{
		printf("%d", --a);
	}
	return (0);
}
