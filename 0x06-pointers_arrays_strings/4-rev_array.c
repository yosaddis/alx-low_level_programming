#include "main.h"
#include <string.h>
/**
 * reverse_array - resets to 98
 * Return: void
 * @a: pointer to string
 * @n: size of n
 * */

void reverse_array(int *a, int n)
{
	int i ;
	int *ptr;

	ptr = a;
	ptr = &a[n -1];
	for (i = 0; i < n; i++)
	{
		*ptr--;
	}
	return (ptr);
}
