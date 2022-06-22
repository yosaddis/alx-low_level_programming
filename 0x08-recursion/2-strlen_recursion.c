#include"main.h"
#include<stdio.h>

/**
 * _strlen_recursion - prints string using recursion
 * Return: length of a string
 * @s: string to measure
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
		return (0);
}
