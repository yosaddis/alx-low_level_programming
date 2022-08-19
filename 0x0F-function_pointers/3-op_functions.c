#include "3-calc.h"

/**
 * op_add - addition
 * @a: num 1
 * @b: num 2
 * Return: add
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subctraction
 * @a: num 1
 * @b: num 2
 * Return: diff
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply
 * @a: num 1
 * @b: num 2
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_mod - modules
 * @a: num 1
 * @b: num 2
 * Return: reminder
 */
int  op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

/**
 * op_div - division
 * @a: num 1
 * @b: num 2
 * Return: division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
