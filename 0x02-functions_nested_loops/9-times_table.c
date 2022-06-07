#include<stdio.h>
#include "main.h"
#include<stdlib.h>
#include<limits.h>
/**
 * times_table - shows all digital times
 * Return: 0 (success)
 */

void times_table(void)
{
	int i, j, product;

	for (i = 0; i <= 9; i++)
	{
		_putchar(48);
		for (j = 1; j <= 9; j++)
		{
			product = i * j;
			_putchar(44);
			_putchar(32);
			if (product <= 9)
			{
				_putchar(32);
				_putchar(product + 48);
			}
			else
			{
				_putchar((product / 10) + 48);
				_putchar((product % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
