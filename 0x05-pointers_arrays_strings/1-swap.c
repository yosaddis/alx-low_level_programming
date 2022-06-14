#include "main.h"

/**
 * swap_int - resets to 98
 * Return: void
 * @a: pointer to a
 * @b: pointer to b
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
