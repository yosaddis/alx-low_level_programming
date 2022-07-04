#include"dog.h"
#include<stdlib.h>

/**
 * free_dog - free the dog struct
 * @d: the dog itself
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
