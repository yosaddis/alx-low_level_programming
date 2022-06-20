#include "main.h"

/**
 * _memcpy- copies the content of a memory
 * Return: dest
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: size to copy to
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *pszDest = (char *) dest;
	const char *pszSource = (const char *)src;

	if ((pszDest != NULL) && (pszSource != NULL))
	{
		*(pszDest++) = *(pszSource++);
			--n;
	}
	return (dest);
}
