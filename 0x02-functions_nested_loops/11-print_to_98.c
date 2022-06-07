#include<stdio.h>
#include "main.h"
#include<ctype.h>
/**
 * print_to_98 - display number from n to 98
 * Return: 0 (success)
 *@n:n
 */

void print_to_98(int n)
{
	int i;
	for(i = n; i < = 98; i++)
	{
		_putchar(i);
		_putchar(' ');
		_putchar(',');
	}
	_putchar('\n');	
}
