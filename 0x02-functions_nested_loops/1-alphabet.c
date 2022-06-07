#include<stdio.h>
#include"main.h"

/**
 * print_alphabet - Print small letter chrachters
 *
 * Return: 0 (success)
 *
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	putchar('\n');
}
