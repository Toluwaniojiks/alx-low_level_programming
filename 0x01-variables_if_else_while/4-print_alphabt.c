#include <stdio.h>

/**
* main - main block
* Description: print lowercase letters of the alphabet that are not 'q' and 'e'
* Return: Always 0 (Success)
*/
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if(c != 'q' && c != 'e')
		{
			putchar(c);
		}
		++c;
	}
	putchar('\n');
	return (0);
}
