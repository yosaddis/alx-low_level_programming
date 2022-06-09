#include "main.h"
/**
 * print_more_numbers - prints digits except 0 and 14
 * Return: void
 */

void print_most_numbers(void)
{
	char i;
	int j;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
			_putchar(i);
	}
	_putchar('\n');
}

