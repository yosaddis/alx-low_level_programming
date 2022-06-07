#include<stdio.h>
/**
 * main - Entry Point
 *
 * Return - 0 (success)
 *
 * */

void print_alphabet(void);

void print_alphabet(void)
{
	int i = 65;

	for (int i = 97; i < 122; i++)
	{
		putchar(i);
	}
	putchar('\n');
}

int main(void)
{
	print_alphabet();
	return (0);
}
