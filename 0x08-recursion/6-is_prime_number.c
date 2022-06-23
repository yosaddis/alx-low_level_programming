#include"main.h"
/**
 * is_prime_number - checks if the number is prime number or not
 * Return: (0) if its not (1) if it is
 * @n: given number
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}
/**
 * is_prime - detects if an input number is a prime number.
 * @n: given no
 * @c: iterator
 * Return: (1) if n is a prime number. (0) if n is not prime
 */
int is_prime(int n, int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(n, c + 1));
}
