#include<stdio.h>
/**
 * main - prints all arguments
 * Return: 0 on success
 * @argc: number of arguments
 * @argv: array of inputs
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	int  i = 0;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
