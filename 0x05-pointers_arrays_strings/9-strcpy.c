#include "main.h"
#include <string.h>
/**
 * _strcpy - copies a string
 * Return: char
 * @dest: pointer to string destination
 * @src: pointer to string source
 */

char *_strcpy(char *dest, char *src)
{
	int i;
//	dest = (char*)malloc(20);
	for (i =0; i < strlen(src); i++)
	{
		dest[i] = src [i];
	}

	return dest;
}
