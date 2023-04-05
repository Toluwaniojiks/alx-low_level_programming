#include "main.h"

/**
 * square_root - returns the natural square root of a number
 * @n: input value
 * @i: iterator
 *
 * Return: square root
 */
int square_root(int n, int i)
{
	if (i % (n / i) == 0 && i * (n / i) == n)
	{
		return (i);
	}
	else
	{
		return (-1);
	}
	return (0 + square_root(n, i + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n:input value
 *
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	return (square_root(n, 2));
}
