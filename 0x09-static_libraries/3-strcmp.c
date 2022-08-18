#include "main.h"
#include <string.h>
/**
 * _strcmp - compares a strings
 * Return: int
 * @s1: pointer to destination string
 * @s2: pointer to source string
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int equal = 0;

	while (equal == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		equal = *(s1 + i) - *(s2 + i);
		i++;
	}
	return (equal);
}
