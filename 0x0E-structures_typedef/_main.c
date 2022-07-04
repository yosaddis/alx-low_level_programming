#include<stdio.h>
#include"dog.h"

int main(void)
{
	struct dog my_dog;

	init_dog(&my_dog, "poppy",3.5,"bob");
	printf("My name is %s, and I am %.1f :) - woof \n",my_dog.name, my_dog.age);
	return (0);
}
