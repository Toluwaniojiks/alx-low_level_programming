#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line
 *@n: Input value
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
		_putchar(92);
		_putchar('\n');
	}
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
