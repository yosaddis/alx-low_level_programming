#include "main.h"
/**
 * print_numbers - prints digits
 * Return: 1 on success
 */

void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

