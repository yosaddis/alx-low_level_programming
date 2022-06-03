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
	int n;
	int m;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (m < 0)
		m= m * -1;
	printf("last digit is %d \n",m);
	if (m > 5)
	{
		printf("Last digit of %d is greater than \n5",n);
	}
	else if (m < 6 && m != 0)
	{
		printf("Last digit of %d is less than 6 and not 0\n",n);
	}
	else if (m == 0 )
	{
		printf("Last digit of %d is 0\n",n);
	}
	return (0);
}
