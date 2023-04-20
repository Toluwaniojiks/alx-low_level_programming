#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array:array
 * @cmp: Pointer to a function
 * @size: number of elements in the array
 * Return: index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int count;

	if (array && cmp)
	{
		for (count = 0; count < size; count++)
		{
			if (cmp(array[count]) != 0)
				return (count);
		}
	}
}
