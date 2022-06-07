#include<stdio.h>
#include"main.h"

/**
 * main - Entry Point
 *
 * Return: 0 (success)
 *
 * */

void print_alphabet(void)
{
	int i;

	for (i = 97; i < 122; i++)
	{
		_putchar(i);
	}
	putchar('\n');
}
