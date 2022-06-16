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
	int a1[] ={0, 1, 3, 4, 5};
	print_array(a1, 5);
	reverse_array(a1, sizeof(a1)/sizeof(int));
	print_array(a1, sizeof(a1)/ sizeof(int));
	return (0);
}
