#include "main.h"
#include <string.h>
/**
 * _strncat - resets to 98
 * Return: void
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n:no of bytes to concatenates
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
