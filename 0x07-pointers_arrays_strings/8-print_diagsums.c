#include "main.h"
#include <string.h>
/**
 * print_diagsums - prints the sum of diagonals in a matrix
 * Return: sum of the matrix diagonals
 * @a: given matrix
 * @size: the size of the square
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int sum = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum = sum + a[(i * size) + j];
			if (j == (size - i) - 1)
				sum2 = sum2 + a[(i * size) + j];
		}
	}
	printf("%d, %d\n", sum, sum2);
}
