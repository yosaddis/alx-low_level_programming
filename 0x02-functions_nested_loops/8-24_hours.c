#include<stdio.h>
#include "main.h"
#include<stdlib.h>
#include<limits.h>
/**
 * jack_bauer - shows all digital times
 * Return: 0 (success)
 */

void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 48; i <= 50; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for(k = 48; k <= 53;k++)
			{
				for (l = 48; k <= 57; k++)
				{
					if (i >= 50 && j >= 52)
						break;
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(l);
					_putchar('\n');
				}
			}
		}
	}
}
