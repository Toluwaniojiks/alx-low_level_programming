#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: first interger numbers
 * @max: last interger number
 *
 * Return: pointer on success
 */
int *array_range(int min, int max)
{
	int a;
	int b;
	int *pointer;

	if (min > max)
	{
		return (NULL);
	}
	b = max - min + 1;
	pointer = malloc(sizeof(int) * b);
	if (pointer == NULL)
	{
		return (NULL);
	}
	a = 0;
	while (a < b)
	{
		pointer[a] = min;
		min++;
		a++;
	}
	return (pointer);
}
