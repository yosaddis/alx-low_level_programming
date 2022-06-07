#include<stdio.h>
#include "main.h"
#include<ctype.h>
/**
 * islower - checks if letter is lower case
 *
 * Return: 0 (success)
 *
 */

int _islower(int c)
{
	if (islower(c) != 0)
		return (1);
	return (0);	
}
