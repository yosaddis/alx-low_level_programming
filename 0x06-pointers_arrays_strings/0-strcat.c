#include "main.h"
#include <string.h>
/**
 * _strcat- resets to 98
 * Return: void
 * @dest: pointer to destination string
 * @src: pointer to source string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (j >= 0)
	{
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
			break;
		i++;
		j++;
	}
	return (dest);
}
