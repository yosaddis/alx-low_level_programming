#include<stdlib.h>
/**
 * _calloc - allocate memory for an array
 * Return: pointer to the allocated space
 * @nmemb: no of memebory blocks
 * @size: size of the array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb == 0)
	{
		return (0);
	}
	else
	{
		return (malloc(sizeof(nmemb) * size));
	}
	return (NULL);
}
