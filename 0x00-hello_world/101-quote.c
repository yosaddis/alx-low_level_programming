#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: 1 Always (Success)
 */
int main(void)
{
	char string[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, string, 59);
	return 1;
}
