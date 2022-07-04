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
		memcpy(&d->name,&name,sizeof(name));
		d->age = age;
		memcpy(&d->owner, &owner,sizeof(owner));
		return (d);
	}
	free(d);
	return (NULL);
}
