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
	int i, j, sum = 0;

	if (argc <= 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (isdigit(argv[i]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
