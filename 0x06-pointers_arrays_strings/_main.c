#include "main.h"
#include <stdio.h>

void print_array(int *a, int n)
{
	int i;

	i=0;
	while (i < n)
	{
		if (i != 0)
			printf(", ");
	printf("%d", a[i]);
	i++;
	}
	printf("\n");
}

int main(void)
{
	char str[] ="Look}up!i.was{here";
	char *ptr;

	ptr = cap_string(str);
	printf("%s\n", ptr);

	return (0);
}
