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
	char s[] = "Expect the best. Prepare for thr worst. Capitalize on what comes.\n";
	char *p;

	p= leet(s);
	printf("%s",s);
	printf("%s", p);
	return (0);
}
