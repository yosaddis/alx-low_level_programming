#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	long int num = 612852475143;
	int prime_factor;

	for ( prime_factor = 2; prime_factor <= num; prime_factor++)
	{
		if (num % prime_factor == 0)
		{
			num = num / prime_factor;
			prime_factor--;
		}
	}
	printf("%d\n",prime_factor);
	return (0);
}
