#include <stdio.h>
#include <ctype.h>

/**
 * _isupper - check fors upper letter
 * Return: 1 on success
 * @c: given charachter
 */

int _isupper(int c)
{
	if (isupper(c) == 0)
		return (0);
	return (1);
}

