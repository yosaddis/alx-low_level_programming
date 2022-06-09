#include<unistd.h>

/**
 * _putchar - prints char
 *
 * Return: 0 (success)
 * @c: charchter to print
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
