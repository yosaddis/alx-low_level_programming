#include<stdio.h>
#include "main.h"
#include<ctype.h>
/**
 * _islower - checks if letter is lower case
 * Return: 0 (success)
 *@c:c
 */

int _islower(int c)
{
	if (islower(c) != 0)
		return (1);
	return (0);
}
