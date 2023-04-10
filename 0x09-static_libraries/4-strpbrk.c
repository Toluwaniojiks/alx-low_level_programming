#include "main.h"

/**
 * _strpbrk - function searches a string for any of a set of bytes.
 *@s:string
 *@accept: string
 *
 * Return: ointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int a;
	unsigned int b;

	for (a = 0; *(s + a) != '\0'; a++)
	{
		for (b = 0; *(accept + b) != '\0'; b++)
		{
			if (*(s + a) == *(accept + b))
				return (s + a);
		}
	}
	return ('\0');
}
