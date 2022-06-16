#include "main.h"
#include <string.h>
/**
 * cap_string -captilises string in a word
 * Return: void
 * @string: pointer to a string
 */

char *cap_string(char *string)
{
	int i;
	int x = strlen(string);
	for (i = 1; i < x; i++)
	{
		if (isalpha(string[i]) &&
			(string[i - 1] == ' ') ||
			(string[i - 1] == ',') ||
			(string[i - 1] == ';') || (string[i - 1] == '.') ||
			(string[i - 1] == '!') || (string[i - 1] == '?') ||
			(string[i - 1] == '"') || (string[i - 1] == '(') ||
			(string[i - 1] == ')') || (string[i - 1] == '}') ||
			(string[i - 1] == '}') || (string[i - 1] == '\t') || (string[i - 1] == '\n'))
		{
			// only first letters of a word.
			string[i] = toupper(string[i]);
		}
	}
}
