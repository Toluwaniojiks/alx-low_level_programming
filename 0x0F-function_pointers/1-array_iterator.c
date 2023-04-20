#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator -function that executes a function
 * @size:Size of array
 * @action:pointer to the function
 * @array: array
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int count = 0;

	if (!array || !action)
		return;
	while (count < size)
	{
		action(array[count]);
		count++;
	}
}
