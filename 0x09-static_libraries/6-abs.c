#include "main.h"

/**
 * _abs - computers the absolute value of an integer
 *@c: -interger to be entered.
 *
 * Return: Absolute value
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs;

		abs = c * -1;
		return (abs);
	}
	return (c);
}
