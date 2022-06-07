#include<stdio.h>
#include "main.h"
#include<stdlib.h>
#include<limits.h>
/**
 * print_last_digit - shows last digit
 * Return: 0 (success)
 *@n:n
 */

int print_last_digit(int n)
{
	int last;
	
	last = n % 10;
	if (last < 0)
	{
		_putchar(-last + 48);
		return (-last);
	}
	else
	{
		_putchar(last + 48);
		return(last);
	}
}
