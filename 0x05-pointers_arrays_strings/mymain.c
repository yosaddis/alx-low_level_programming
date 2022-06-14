#include "main.h"
#include <stdio.h>

int main(void)
{
	char *str;
	int len;

	str = "My first strlen!";
//	len = _strlen(str);
//	_puts(str);
//	printf("%d\n", len);
	print_rev(str);
	return (0);
}
