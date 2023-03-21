#include "main.h"

/**
 * print_alphabet_x10 - print alphabet
 *
 * Return void
 */
void print_alphabet_x10(void)
{
	char i;
	int b = 0;

	while (b <= 9)
	{
		for (i = 'a'; i <= 'z'; ++i)
		{
			_putchar(i);
		}
		_putchar('\n');
		++b;
	}
}
