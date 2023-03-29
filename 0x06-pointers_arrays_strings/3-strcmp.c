#include "main.h"

/**
 * _strcmp - compares two string
 *@s1: first string
 *@s2: second string
 *
 * Return: negative value or positive value
 */
int _strcmp(char *s1, char *s2)
{
	int y;

	for (y = 0; s1[y] != '\0' || s2[y] != '\0'; y++)
	{
		if (s1[y] != s2[y])
			return (s1[y] - s2[y]);
	}
	return (0);
}
