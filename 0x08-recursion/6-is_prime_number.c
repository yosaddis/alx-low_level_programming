#include"main.h"
/**
 * is_prime_number - checks if the number is prime number or not
 * Return: 0 if its not 1 if it is
 * @n: given number
 * 
 */
int is_prime_number(int n)
{
	int i = n / 2;

	if ((n / 2) == 1)
		return 1;
	else if (n % (n / 2) == 0)
		return (0);
	else
		is_prime_number(n-1);
}
