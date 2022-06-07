#include<stdio.h>
#include "main.h"
#include<ctype.h>
/**
 * print_sign - checks a number sign and prints
 * Return: 0 (success)
 *@n:n
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
