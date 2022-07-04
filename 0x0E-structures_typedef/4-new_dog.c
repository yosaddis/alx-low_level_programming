#include"dog.h"
#include<string.h>
#include<stdlib.h>

/**
 * new_dog - initializes new dog from struct
 * @name: name to assign
 * @age: the age
 * @owner: the owner of the dog
 * Return: pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(d));

	if (d != NULL || (name) || (owner))
	{
		d->name = malloc(sizeof(strlen(name)) + 1);
		d->owner = malloc(sizeof(strlen(owner)) + 1);
		
		d->name = memcpy(d->name, name, sizeof(name));
		d->owner = memcpy(d->owner,owner,sizeof(owner));
		d->age = age;

		return (d);
	}
	free(d);
	return (NULL);
}
