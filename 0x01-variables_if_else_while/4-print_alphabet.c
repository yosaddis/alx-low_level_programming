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

	for (i = 97; i < 123; i++)
	{
		c = i;
		if(i != 113 && i != 101)
			putchar(c);

	}
	putchar('\n');
	return (0);
}
