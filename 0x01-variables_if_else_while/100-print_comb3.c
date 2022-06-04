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
	int j = 0;

	for (i = 48; i < 58; i++)
	{
		for(j = 48;j < 58; j++)
		{
			if (i != j && i < j)
			{
				putchar(i);
				putchar(j);
				if (j == 57 && i == 57)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
		
	}
	putchar('\n');
	return (0);
}
