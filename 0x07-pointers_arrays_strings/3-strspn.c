#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 *@s: initial segment.
 *@accept: Number of byte to be accepted
 *
 * Return: Number of accepted bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a;
	unsigned int b;
	unsigned int c;

	for (a = 0; *(s + a) != '\0'; a++)
	{
		c = 1;
		for (b = 0; *(accept + b) != '\0'; b++)
		{
			if (*(s + a) == *(accept + b))
			{
				c == 0;
				break;
			}
		}
		if (c == 1)
			break;
	}
	return (a);
}
