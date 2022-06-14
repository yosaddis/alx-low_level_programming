#include "main.h"
#include <string.h>
/**
 * puts_half -print odd chars in str
 * Return: void
 * @str: pointer to string
 */

void puts_half(char *str)
{
	int count = strlen(str);
	int i;
	int n;

	if (n % 2 == 0)
		n = count / 2;
	else
		n = (count - 1) / 2;

	for (i = n; i < count; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
