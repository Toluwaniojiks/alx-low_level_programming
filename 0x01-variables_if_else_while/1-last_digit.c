#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - using relational operators
 *
 * Return: - Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 98)
	{
		printf("Last digit of 98 is 8 and is greater than 5\n");
	}
	else if (n == 980)
	{
		printf("Last digit of 980 is 0 and is 0\n");
	}
	else if (n == -98)
	{
		printf("Last digit of -98 is -8 and is less than 6 and not 0\n");
	}
	return (0);
}

