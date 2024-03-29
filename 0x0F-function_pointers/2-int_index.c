#include"function_pointers.h"

/**
 * int_index - searchs for an int
 * @array: input integer array
 * @size: size of the array
 * @cmp: pointer to the function
 *
 * Return: index of the first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}
	return (-1);
}
