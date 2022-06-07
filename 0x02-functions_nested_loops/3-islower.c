#include<stdio.h>
/**
 * main - Entry Point
 *
 * Return - 0 (success)
 *
 * */

int _islower(int);

int _islower(char c)
{
	if(c >= 65 && c<=121)
		return(1);
	
	return (0);
}

int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = islower('o');
	_putchar(r + '0');
	r = islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
