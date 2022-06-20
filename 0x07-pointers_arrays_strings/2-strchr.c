#include "main.h"
#include <string.h>
/**
 * _strchr - fills the memory with given byte
 * Return: pointer to the memory area of first occernce
 * @s: pointer to destination string
 * @c: char to search
 */

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
