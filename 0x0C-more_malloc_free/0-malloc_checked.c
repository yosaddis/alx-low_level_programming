#include<stdlib.h>
/**
 * malloc_checked - checks for malloc
 * Return: void
 * @b: the block size
 */
void *malloc_checked(unsigned int b)
{
	void *memory_alloc = malloc(b);

	if (!memory_alloc && b)
	{
		exit(98);
	}
	return (memory_alloc);
}
