#include "main.h"
#include <string.h>

/**
 * print_rev - prints reverse
 * Return: void
 * @s: pointer to string
 */

void print_rev(char *s)
{
	int count = strlen(s);
	int i;

	for (i = count; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
