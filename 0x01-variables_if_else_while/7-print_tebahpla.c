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
	char c;
	int i = 0;

	for (i = 122; i > 96; i--)
	{
		c = i;
		putchar(c);
	}
	putchar('\n');

	return (0);
}
