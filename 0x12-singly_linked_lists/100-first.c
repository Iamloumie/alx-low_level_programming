#include "lists.h"

/**
 * func_b4_main- runs before the main function
 */

void __attribute__((constructor)) func_b4_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
