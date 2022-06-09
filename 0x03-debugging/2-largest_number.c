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

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > a && b > c)
	{
		largest = b;
	}
	else if (c > a && c > b)
	{
		largest = c;
	}
	else if (a > b && a >= c)
	{
		largest = a;
	}
	else if (b > a && b >= c)
	{
		largest = b;
	}
	else if (c > a && c >= b)
	{
		largest = c;
	}

	return (largest);
}
