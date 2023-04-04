#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square
 *@a: input
 *@size: size of the matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int m;
	int b = 0;
	int c = 0;

	for (m = 0; m < (size * size); m++)
	{
		if (m % (size + 1) == 0)
			b += *(a + m);
		if (m % (size - 1) == 0 && m != 0 && m < size * size - 1)
			c += *(a + m);
	}
	printf("%d, %d\n", b, c);
}
