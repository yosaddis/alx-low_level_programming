#include "main.h"
/**
 * print_square - print square of hash sign
 * Return: 1 on success
 * @n: number of print
 */

void print_square(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	_putchar('\n');
}

