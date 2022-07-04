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
	int name_size, owner_size;
	int i, j;

	if (d != NULL || (name) || (owner))
	{
		d->name = malloc(sizeof(strlen(name)) + 1);
		d->owner = malloc(sizeof(strlen(owner)) + 1);
		for (name_size = 0; name[name_size] != '\0'; name_size++)
			;
		for (owner_size = 0; owner[owner_size] != '\0'; owner_size++)
			;
		for (i = 0; i < name_size; i++)
			d->name[i] = name[i];
		d->name[i] = '\0';
		for (j = 0; j < owner_size; j++)
			d->owner[j] = owner[j];
		d->owner[j] = '\0';
		d->age = age;
		return (d);
	}
	free(d);
	return (NULL);
}
