#include "function_pointers.h"

/**
 * array_iterator - executes function
 * @array: input integer
 * @size: size of the array
 * @action: pointer to the function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
