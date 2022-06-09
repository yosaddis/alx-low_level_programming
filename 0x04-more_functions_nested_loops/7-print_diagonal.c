#include "main.h"
/**
 * print_diagonal - prints line
 * Return: 1 on success
 * @n: number of print
 */

void print_diagonal(int n)
{
	char i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('\\');
		}
	}
	_putchar('\n');
}

