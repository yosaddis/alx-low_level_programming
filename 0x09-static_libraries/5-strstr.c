#include "main.h"
#include <string.h>

/**
 * _strstr - searches a string inside another string
 * Return: pointer to the location of the string
 * @haystack: the string to be searched on
 * @needle: the string to be searched
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
