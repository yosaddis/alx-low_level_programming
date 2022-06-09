#include "main.h"
#include<stdlib.h>
/**
 * main - entry point
 * Return: 1 on success
 */

int main(void)
{
	int i, j;

	for (i = 1; i <= 100; i++)
	{
		if (((i % 3) == 0) && ((i % 5) == 0))
			printf("fizzBuzz");
		else if ((i % 3) == 0)
			printf("fizz");
		else if ((i % 5) == 0)
			printf("buzz");
		else
			printf("%d", i);
		printf(" ");
	}
	printf("\n");
}

