#include "main.h"
/**
 * print_line - prints line
 * Return: 1 on success
 */

void print_line(int n)
{
	char i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}

