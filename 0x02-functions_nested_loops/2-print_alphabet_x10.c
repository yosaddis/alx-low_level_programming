#include<stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet list 10 times
 *
 * Return: 0 (success)
 *
 * */

void print_alphabet_x10(void)
{
	int i = 65;
	int j = 0;

	for(j = 0; j < 10; j++)
	{	
		for (i = 97; i < 122; i++)
		{
			_putchar(i);
		}
		putchar('\n');
	}
}
