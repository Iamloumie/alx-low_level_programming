#include "main.h"

/**
 * get_endianness - Checks the endianness of the system
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	/**
	 * takes the address of num and casts it to a pointer to char (char *)
	 * storing the result in the pointer ptr.
	 */
	int num = 1;
	char *ptr = (char *)&num;

	/**
	 * returns the value of the first byte (*ptr) cast to an int.
	 * If the first byte is 1, it means the system is little-endian
	 * so the function returns 1.
	 * Otherwise, it returns 0 to indicate a big-endian system.
	 */
	return (*ptr == 1);
}
