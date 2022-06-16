#include "main.h"
#include <string.h>
/**
 * leet - changes string to leet style
 * Return: char
 * @s: pointer to the string to get leet
 */

char *leet(char *s)
{
	int i, count;
	int small_letters[] = {97, 101, 111, 116, 108};
	int capital_letters[] = {65, 69, 79, 84, 76};
	int leet_numbers[] = {52, 51, 48, 55, 49};

	count = 0;
	while (*(s + count) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + count) == capital_letters[i] || *(s + count) == small_letters[i])
			{
				*(s + count) = leet_numbers[i];
				break;
			}
		}
		count++;
	}
	return (s);
}
