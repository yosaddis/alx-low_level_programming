#include "main.h"
#include <string.h>
#include <ctype.h>

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
		string[0] = toupper(string[0]);
		if (isalpha(string[i]) &&
			((string[i - 1] == ' ') || (string[i - 1] == ',') ||
			(string[i - 1] == ';') || (string[i - 1] == '.') ||
			(string[i - 1] == '!') || (string[i - 1] == '?') ||
			(string[i - 1] == '"') || (string[i - 1] == '(') ||
			(string[i - 1] == ')') || (string[i - 1] == '}') ||
			(string[i - 1] == '{') || (string[i - 1] == '\t') ||
			(string[i - 1] == '\n')))
		{
			string[i] = toupper(string[i]);
		}
	}
	return (string);
}
