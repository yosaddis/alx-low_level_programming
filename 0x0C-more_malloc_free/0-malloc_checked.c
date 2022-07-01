#include<stdlib.h>
/**
 * malloc_checked - checks for malloc 
 * Return: void
 * @b: the block size
 */
void *malloc_checked(unsigned int b)
{
	if (!malloc(b) && b)
	{
		exit(98);	
	}
	return (malloc(b));
}
