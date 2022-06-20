#include "main.h"
#include <string.h>
/**
 * _strspn - gets the length of prefix
 * Return: pointer to the memory area
 * @s: pointer to string
 * @accept: no of bytes on initial segement
 */

char *_strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
