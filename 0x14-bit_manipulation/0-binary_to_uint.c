#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint -function that converts
 * a binary number to an unsigned int
 *@b:string
 *
 * Return:The converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int length;

	if (b == NULL)
		return (0);

	for (length = 0; b[length]; length++)
	{
		if (b[length] < '0' || b[length] > '1')
			return (0);
		num = 2 * num + (b[length] - '0');
	}
	return (num);
}
