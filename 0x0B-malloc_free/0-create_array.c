#include<stdlib.h>
/**
 * create_array - create array by given length
 * Return: NULL if size is zero or pointer to the created array
 * @size: size of array
 * @c: initializes charachter
 */
char *create_array(unsigned int size, char c)
{
	char *ch;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ch = malloc(sizeof(c) * size);

	if (ch == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ch[i] = c;

	return (Ch);
}
