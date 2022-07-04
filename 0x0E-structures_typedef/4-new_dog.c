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
	dog_t *d;

	d = malloc(sizeof(d));
	
	int name_size, owner_size;
	int i, j;

	if (d == NULL || !(name) || !(owner))
	{
		free(d);
		return (NULL);
	}
	for (name_size = 0; name[name_size]; name_size++)
		;
	for (owner_size = 0; owner[owner_size]; owner_size++)
		;
	d->name = malloc(name_size + 1);
	d->owner = malloc(owner_size + 1);

	if (!(d->name) || !(d->owner))
	{
		free(d->owner);
		free(d->name);
		free(d);
		return (NULL);
	}
	for (i = 0; i < name_size; i++)
		d->name[i] = name[i];
	d->name[i] = '\0';
	for (j = 0; j < owner_size; j++)
		d->owner[j] = owner[j];
	d->owner[j] = '\0';
	d->age = age;
	return (d);
}
