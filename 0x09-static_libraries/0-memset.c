#include "main.h"

/**
 * *_memset - function that fills memory with a constant byte
 *@s: Address to the memory area.
 *@b: Charataer to be used
 *@n: Number of bytes
 * Return: pointer to dest
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; n > 0; a++, n--)
	{
		s[a] = b;
	}
	return (s);
}
