#include<stdio.h>
#include "main.h"

void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int i;

	i=0;
	while (i<size)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", buffer [i]);
		i++;
	}
	printf("\n");
}

void main(void)
{
	/**
	char buffer[98] = {0};
	char buffer2[98] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14};
	
	simple_print_buffer(buffer,98);
	_memcpy(buffer +50, buffer2,10);
	
	char buffer[98] = {0x00};
	simple_print_buffer(buffer ,98);
	_memset(buffer, 0x01,95);

	printf("-------------------------------------------------------\n");
	simple_print_buffer(buffer,98);
	
	int c3[3][3] ={ 
		{ 0, 1, 5, },
		{10,11,12},
		{1000,101,102},
	};
	print_diagsums((int *)c3, 3);
	*/
	char *s0 = "Bob Dylan";
	char *s1 = "Robert Allen";

	printf("%s, %s\n",s0, s1);
	set_string(&s1, s0);
	printf("%s, %s\n",s0, s1);
	
}
