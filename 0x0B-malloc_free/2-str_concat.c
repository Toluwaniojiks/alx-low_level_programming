#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 * @s1:First string
 * @s2:Second string
 *
 * Return: pointer to new string on success
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	int size1, size2;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	size1 = strlen(s1);
	size2 = strlen(s2);

	ptr = malloc(sizeof(char) * (size1 + size2 + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size1; i++)
	{
		ptr[i] = s1[i];
	}

	for (j = 0; j < size2; j++)
	{
		ptr[size1 + j] = s2[j];
	}

	ptr[size1 + size2] = '\0';
	return (ptr);
}
