#include "main.h"
#include <string.h>
/**
 * _memset - fills the memory with given byte
 * Return: pointer to the memory area
 * @s: pointer to destination string
 * @b: byte to fill
 * @n: size to copy to
 */

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
