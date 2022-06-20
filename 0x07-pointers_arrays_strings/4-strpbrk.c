#include "main.h"
#include <string.h>
/**
 * _strpbrk - locates the first occurence of string
 * Return: pointer to bytes s
 * @s: pointer to destination string
 * @accept: byte to fill
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
