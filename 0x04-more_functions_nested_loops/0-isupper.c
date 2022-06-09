#include <stdio.h>
#include <ctype.h>

int _isupper(int c)
{
	if(isupper(c)==0)
		return (0);
	return(1);
}

void main(void)
{
	char c = 'a';

	printf("%d\n", _isupper(c));
}
