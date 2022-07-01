#include<stdlib.h>
#include<string.h>

/**
 * string_nconcat - concactnates strings with each other
 * Return: pointers to point the allocated memory space
 * @s1: first string
 * @s2: second string
 * @n: no of bytes to copy from s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str, *s2_sub;

	if (s1 == NULL)
	{
		s1 = malloc(1);
		s1 = '\0';
	}
	if (s2 == NULL)
	{
		s2 = malloc(1);
		s2 = '\0';
	}
	new_str = malloc(sizeof(s1) + n + 1);
	if (new_str != NULL)
	{
		s2_sub = malloc(sizeof(char) * n);
		strcpy(new_str, s1);
		strncpy(s2_sub, s2, n);
		strcat(new_str, s2_sub);
		return (new_str);
	}
	return (NULL);
}
