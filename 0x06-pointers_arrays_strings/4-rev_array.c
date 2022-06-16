#include "main.h"
#include <string.h>
/**
 * reverse_array - resets to 98
 * Return: void
 * @a: pointer to string
 * @n: size of n
 */

void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (j - 1)) = temp;
		}
	}
}
