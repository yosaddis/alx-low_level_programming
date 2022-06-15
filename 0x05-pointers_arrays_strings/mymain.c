#include "main.h"
#include <stdio.h>

int main(void)
{
	char s1[98];
	char *ptr;

	ptr = _strcpy(s1, "First, solve the proble . Then, write the code \n");
	printf("%s\n", s1);
	printf("%s copied \n", ptr);

	return (0);
}
