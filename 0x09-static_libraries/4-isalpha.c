#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 *@c: Variable to be checked
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 98 && c <= 122))
	{
		return (1);
	}
	return (0);
}
