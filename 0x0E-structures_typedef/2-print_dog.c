#include"dog.h"
#include <stdio.h>

/**
 * print_dog - prints the dog struct
 * @d: the dog itself
 * Return: void
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
       	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
