#include "main.h"

/*
 * _strchr - function that locates a character in a string
 *@s: String.
 *c: Character.
 *
 * Return:pointer to the first occurrence of the character c.
 */
char *_strchr(char *s, char c)
{
	unsigned int a = 0;

	for (a = 0; *(s + a) != '\0'; a++)
		if (*(s + a) == c)
			return (s + a);
	if (*(s + a) == c)
		return (s + a);
	return ('\0');
}
