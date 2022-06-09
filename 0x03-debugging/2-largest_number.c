#include "main.h"

/**
 * largest_number - returns largest number
 * Return: largest number of the three
 * @a: given number
 * @b: given number
 * @c: given numebr
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	if (b >= a && b >= c)
	{
		largest = b;
	}
	if (c >= a && c >= b)
	{
		largest = c;
	}

	return (largest);
}
