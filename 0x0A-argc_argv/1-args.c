#include <stdio.h>
/**
 * main - prints the name of arguments
 * Return: 0 on success
 * @argc: number of arguments
 * @argv: array of arguments
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
