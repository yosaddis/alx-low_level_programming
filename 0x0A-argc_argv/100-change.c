#include<stdio.h>
#include<stdlib.h>
/**
 * main - prints changes
 * Return: 0 on success
 * @argc: number of arguments
 * @argv: array of inputs
 */

int main(int argc, char *argv[])
{
	int c, no_coins = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	c = atoi(argv[1]);

	while (c > 0)
	{
		if (c >= 25)
			c -= 25;
		else if (c >= 10)
			c -= 10;
		else if (c >= 5)
			c -= 5;
		else if (c >= 2)
			c -= 2;
		else if (c >= 1)
			c -= 1;
		no_coins += 1;
	}

	printf("%d\n", no_coins);
	return (0);
}
