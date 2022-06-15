#include "main.h"
#include <stdio.h>

int main(void)
{
	char *str;
	int len;

	str = "My first strlen!";
	//str = "";
	//	len = _strlen(str);
//	_puts(str);
	//printf("%s\n", str);
	//rev_string(str);
	//printf("%s\n",str);
//	puts_half(str);
//
//	int array[5];

//	array[0] = 98;
//	array[1] = 402;
//	array[2] = -198;
//	array[3] = 298;
//	array[4] = -1024;
//	print_array(array, 5);
	char s1[98];
	char *ptr;

	ptr = _strcpy(s1, "First, solve the proble . Then, write the code \n");
	printf("%s\n", s1);
	printf("%s copied \n", ptr);

	return (0);
}
