#include "main.h"
#include <string.h>
/**
 * puts2 -print odd chars in str
 * Return: void
 * @str: pointer to string
 */

void puts2(char *str)
{
	int count = strlen(str);
	int i;

	for (i = 0; i < count; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
