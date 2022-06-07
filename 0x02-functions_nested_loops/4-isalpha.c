#include<stdio.h>
#include "main.h"
#include<ctype.h>
/**
 * _isalpha - checks if letter is lower case
 * Return: 0 (success)
 *@c:c
 */

int _isalpha(int c)
{
	if (isalpha(c) != 0)
		return (1);
	return (0);
}
