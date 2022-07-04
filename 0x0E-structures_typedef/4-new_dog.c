#include"dog.h"
/**
 * new_dog - initializes new dog from struct
 * @name: name to assign
 * @age: the age
 * @owner: the owner of the dog
 * Return: pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = NULL;

	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}
