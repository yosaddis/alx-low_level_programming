#include<stdio.h>
#include"dog.h"

int main(void)
{
	dog_t *my_dog;

	my_dog = new_dog("poppy",3.5,"bob");
	printf("My name is %s, and I am %.1f :) Woof!",my_dog->name, my_dog->age);
	return (0);
}
