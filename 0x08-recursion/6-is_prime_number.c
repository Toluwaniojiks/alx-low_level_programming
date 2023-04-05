#include "main.h"

/**
 * _prime_number - detects if an input number is a prime number.
 * @n: input value.
 * @i: iterator.
 * Return:  1 (Success)
 */
int _prime_number(unsigned int n, unsigned int i)
{
	if (n % i == 0)
	{
		if (n == i)
			return (1);
		else
			return (0);
	}
	return (0 + _prime_number(n, i + 1));
}
/**
 * is_prime_number - detects if an input number is a prime number.
 * @n: input value.
 * Return: 1 on (Success)
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (_prime_number(n, 2));
}
