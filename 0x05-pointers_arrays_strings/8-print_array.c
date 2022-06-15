#include "main.h"
#include <string.h>
/**
 * print_array -print array elements
 * Return: void
 * @a: pointer to string
 * @n: numbers of chars to print
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
			printf(", ");
	}
	_putchar('\n');
}
