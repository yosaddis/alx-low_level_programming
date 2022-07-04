#include"dog.h"
/**
 * init_dog - initializes the dog struct
 * @d: the dog itself
 * @name: name to assign
 * @age: the age
 * @owner: the owner of the dog
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
