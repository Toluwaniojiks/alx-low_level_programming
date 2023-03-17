#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - using relational operators
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("98 is positive\n");
	}
	else if (n == 0)
	{
		printf("0 is zero\n");
	}
	else if (n < 0)
	{
		printf("-98 is negative\n");
	}

	return (0);
}
