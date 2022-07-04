#include<stdio.h>
#include"dog.h"

int main(void)
{
	struct dog my_dog;

	init_dog(&my_dog, "poppy",3.5,"bob");
	print_dog(&my_dog);
	return (0);
}
