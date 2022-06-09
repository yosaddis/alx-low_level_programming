#include<stdio.h>

void main (void)
{
	/**
	int i;
	
	for (i = 48; i < 58; i++)
	{
		printf("%c", i);
	}*/
	int i;
	i = 9;
	while (i--)
	{
		printf("%d", i);
	}
	printf("\n");
	
	i=0;
	while (i<10)
	{
		printf("%d", i % 2);
		i++;
	}
}
