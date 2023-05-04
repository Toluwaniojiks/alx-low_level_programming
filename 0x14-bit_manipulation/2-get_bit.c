#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n:input
 * @index: index
 *
 * Return:value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int b;

	b = (n >> index);
	if (index > 32)
		return (-1);
	return (b & 1);
}
