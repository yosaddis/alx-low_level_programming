#include<stdio.h>
/**
 * main - Entry Point
 *
 * Return - 0 (success)
 *
 * */

void print_alphabet_x10(void);

void print_alphabet_x10(void)
{
	int i = 65;
	int j = 0;

	for(j = 0; j < 10; j++)
	{	
		for (i = 97; i < 122; i++)
		{
			putchar(i);
		}
	
	putchar('\n');
	}
}

int main(void)
{
	print_alphabet_x10();
	return (0);
}
