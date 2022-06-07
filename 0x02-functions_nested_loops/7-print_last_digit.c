#include<stdio.h>
#include "main.h"
#include<stdlib.h>
#include<limits.h>
/**
 * print_last_digit - shows last digit
 * Return: 0 (success)
 *@n:n
 */

int print_last_digit(int n)
{
	return (((abs(n)) % 10));
}
void main(void)
{
	printf("%d\n",print_last_digit(INT_MIN));
}
