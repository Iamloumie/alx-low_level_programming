#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - add operation
 * @a: first incoming integer
 * @b: second incoming integer
 * Return: return a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction operation
 * @a: first incoming integer
 * @b: second incoming integer
 * Return: return a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication operation
 * @a: first incoming integer
 * @b: second incoming integer
 * Return: return a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division operation
 * @a: first incoming integer
 * @b: second incoming integer
 * Return: return a / b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulo operation
 * @a: first incoming integer
 * @b: second incoming integer
 * Return: return a % b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
