#include "main.h"

/**
 * _pow_recursion - power calculation
 * Return: the power value of x^y
 * @x: base number
 * @y: super script number
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
