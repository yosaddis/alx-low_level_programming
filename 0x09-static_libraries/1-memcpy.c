#include "main.h"
#include<string.h>
/**
 * _memcpy- copies the content of a memory
 * Return: dest
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: size to copy to
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
