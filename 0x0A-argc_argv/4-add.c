#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
/**
 * main - adds to postive numbers
 * Return: 0 on success
 * @argc: number of arguments
 * @argv: array of inputs
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;
	if (argc == 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]))
				sum += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
