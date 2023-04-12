#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str - string to be copied
 * Return: A pointer on success and NULL if no mermory is allocated
 */
char *_strdup(char *str)
{
	int i;
	int size;
	char *ptr;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		size++;
	ptr = malloc(sizeof(char) * (size + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		ptr[i] = str[i];
	}
	ptr[size] = \'0';
	return (ptr);
}
