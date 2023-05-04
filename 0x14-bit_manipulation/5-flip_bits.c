#include "main.h"
#include <stdlib.h>

/**
 * flip_bits -function that returns the number of
 * bits you would need to flip to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return:bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, n_bit = 0;
	unsigned long int j = sizeof(unsigned long int) * 8;

	for (i = 0; i < j; i++)
	{
		if ((n & 1) != (m & 1))
			n_bit += 1;
		n = n >> 1;
		m = m >> 1;
	}
	return (n_bit);
}
