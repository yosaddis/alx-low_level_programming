#include "main.h"
/**
 * print_most_numbers - prints digits except 4 and 2
 * Return: 1 on success
 */

void print_most_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
			_putchar(i);
	}
	_putchar('\n');
}

