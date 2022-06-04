#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0  (success)
 *
 */
int main(void)
{
	int i = 0;
	char c;
	for (i = 49; i < 60; i++)
	{
		c = i;
		putchar(c);
	}
	putchar('\n');
	return (0);
}
