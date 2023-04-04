#include "main.h"

/**
 * print_chessboard - function that prints the chessboard
 *@a:pointer
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	unsigned int c;
	unsigned int b = 0;

	for (c = 0; c < 64; c++)
	{
		if (c % 8 == 0 && c != 0)
		{
			b = c;
			_putchar('\n');
		}
		_putchar(a[c / 8][c - b]);
	}
	_putchar('\n');
}
