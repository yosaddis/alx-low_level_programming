#include "main.h"
/**
 * more_numbers - prints digits except 0 and 14
 * Return: void
 */

void more_numbers(void)
{
	int j;
	int k;

	for (k = 0; k < 10; k++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				_putchar((j / 10) + 48);
			}
			_putchar((j % 10) + 48);
		}
		_putchar('\n');
	}
}

