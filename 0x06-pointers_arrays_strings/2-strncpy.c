#include "main.h"
#include <string.h>
/**
 * _strncpy -copies n strings
 * Return: void
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n:no of bytes to concatenates
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
