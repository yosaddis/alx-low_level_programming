#include "main.h"
#include <string.h>
/**
 * set_string - sets string to a char
 * Return: void
 * @s: pointer to the string
 * @to: a charchter to set to
 */
void set_string(char **s, char *to)
{
	while (*s != '\0')
	{
		while (**s != '\0');
		{
			putchar(**s);
		}
		putchar('\n');
		s++;
	}

}
