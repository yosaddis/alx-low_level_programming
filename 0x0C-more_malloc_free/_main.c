#include "main.h"
#include <stdio.h>
#include<stdlib.h>
#include<limits.h>

int  main(void)
{
/**
	char *c;
	int *i;
	float *f;
	double *d;

	c = malloc_checked(sizeof(char)*1024);
	printf("%p\n", (void *)c);
	i = malloc_checked(sizeof(int)*402);
	printf("%p\n",(void *)i);
	f = malloc_checked(sizeof(float) *1000000000);
	printf("%p\n",(void *)f);
	d = malloc_checked(INT_MAX);
	printf("%p\n", (void *)d);

	free(c);
	free(i);
	free(d);
*/
	char *concat;
	concat = string_nconcat("Best ","School !!!", 4);
	printf("%s\n", concat);	
	free(concat);
	return(0);
}
