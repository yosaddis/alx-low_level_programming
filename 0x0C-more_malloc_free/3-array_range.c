#include<stdlib.h>
/**
 * array_range - return the pointer to the newly created array
 * Return: null if min >max or NULL if the memory allocation fails
 * @min: mini of array
 * @max: maximum of the array
 */
int *array_range(int min, int max)
{
	int *numbers;
	int i;

	if (min > max)
		return (NULL);
	numbers = malloc(sizeof(int) * (max - min) + 1);
	if (numbers == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		numbers[i] = i;
	}
	return (numbers);
}
