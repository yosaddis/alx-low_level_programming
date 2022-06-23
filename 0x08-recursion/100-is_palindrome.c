#include "main.h"
#include <string.h>

/**
 * isPalRec - checks if a string is palindrome
 * @str: given charachter
 * @s: start index of string
 * @e: end index of string
 * Return: 0 if its not 1 if it is
 */
int isPalRec(char *str, int s, int e)
{
	if (s == e)
		return (1);
	if (str[s] != str[e])
		return (0);
	if (s < e + 1)
		return (isPalRec(str, s + 1, e - 1));
	return (1);
}

/**
 * is_palindrome - checks for palandirome
 * @s: given string
 * Return: (0) if it is (1) if its not
 */
int is_palindrome(char *s)
{
	int n = strlen(s);

	if (n == 0)
		return (1);
	return (isPalRec(s, 0, n - 1));
}
