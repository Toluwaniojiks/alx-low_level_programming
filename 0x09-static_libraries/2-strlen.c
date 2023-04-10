#include "main.h"

/**
 *  _strlen - function that returns the length of a string
 *@s: pointer to a string
 *
 * Return: length of a string
 */
int _strlen(char *s)
{
	int length = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		length += 1;
		i++;
	}
	return (length);
}
