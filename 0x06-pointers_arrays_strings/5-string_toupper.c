#include "main.h"
#include <ctype.h>
/**
 * string_toupper - changes to upper letter
 * Return: char
 * @s: pointer to string
 */

char *string_toupper(char *s)
{
	char *upper;
	int i = 0;

	upper = s;
	while (upper[i] != '\0')
	{
		upper[i] = toupper(s[i]);
		i++;
	}
	return (upper);
}
