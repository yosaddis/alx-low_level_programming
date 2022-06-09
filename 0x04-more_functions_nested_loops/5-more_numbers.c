#include "main.h"
/**
 * more_numbers - prints digits except 0 and 14
 * Return: void
 */

void more_numbers(void)
{
	char i;
	int j;
	int k;

	for (k = 0; k < 10; k++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j == 10)
				i = '0';
			for (i = '0'; i <= '9'; i++)
			{
				if (j > 9)
				{
					_putchar('1');
				}
				_putchar(i);
			}
		}
		_putchar('\n');
	}
}

