#include "main.h"
#include <stdio.h>

int main(void)
{
	int nb;

	nb = _atoi("98");
	printf("%d\n", nb);
	nb = _atoi("-402");
	printf("%d\n",nb);
	nb = _atoi("           ------++++++-----+++++-98");
	printf("%d\n",nb);

	return (0);
}
