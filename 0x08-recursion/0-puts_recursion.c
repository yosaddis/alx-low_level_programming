#include"main.h"
#include<stdio.h>

/**
 * _puts_recursion - prints string using recursion
 * Return: void
 * @s: string to print
 *
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	_putchar('\n');
}
