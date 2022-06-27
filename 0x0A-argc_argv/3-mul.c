#include<stdio.h>
#include<stdlib.h>
/**
 * main - multiplies two numbers
 * Return: 0 on success
 * @argc: number of arguments
 * @argv: array of inputs
 */

int main(int argc, char *argv[])
{
	int product = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		product = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", product);
	}
	return (0);
}
