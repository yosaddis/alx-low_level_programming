#include "main.h"
/**
 * factorial - finds factorial of a number
 * Return: factorial of number
 * @n: given number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
