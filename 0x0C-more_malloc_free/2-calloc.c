#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array
 * using malloc
 * @nmemb: Array
 * @size:number of bytes alocated
 * Return:Pointer on success
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;
	unsigned int a;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	pointer = malloc(nmemb * size);
	if (pointer == NULL)
	{
		return (NULL);
	}
	a = 0;
	while (a < (nmemb * size))
	{
		pointer[a] = 0;
		a++;
	}
	return (pointer);
}
