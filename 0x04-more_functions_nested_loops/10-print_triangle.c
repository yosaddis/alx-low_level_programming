#include "main.h"
/**
 * print_triangle - print square of hash sign
 * Return: 1 on success
 * @n: number of print
 */

void print_triangle(int n)
{
	int i, j, k;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = i; j < n-1; j++)
			{
				_putchar(' ');
			}
			for (k = 1; k <= i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

