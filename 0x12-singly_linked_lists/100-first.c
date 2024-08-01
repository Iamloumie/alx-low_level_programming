#include "lists.h"

/*func_b4_main- runs before the main function*/

__attribute__((constructor))
			  void func_b4_main(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
