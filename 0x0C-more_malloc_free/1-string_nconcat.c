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
	unsigned int len_s1, len_s2, len_new_str, i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (len_s1 = 0; s1[len_s1] != '\0'; len_s1++)
		;
	for (len_s2 = 0; s2[len_s2] != '\0'; len_s2++)
		;
	if (n > ls2)
		n = ls2;
	len_new_str = len_s1 + n;
	new_str = malloc(len_new_str + 1);
	if (new_str != NULL)
	{
		for (i = 0; i < len_new_str; i++)
		{
			if (i < len_s1)
				new_str[i] = s1[i];
			else
				new_str[i] = s2[i - len_s1];
			new_str[i] = '\0';
		}
		return (new_str);
	}
	return (NULL);
}
