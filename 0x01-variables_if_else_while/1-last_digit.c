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
	if (n == 96)
	{
		printf("Last digit of 96 is 6 and is greater than 5\n");
	}
	else if (n == 90)
	{
		printf("Last digit of 90 is 0 and is 0\n");
	}
	else if (n == 95)
	{
		printf("Last digit of 95 is 5 and is less than 6 and not 0\n");
	}
	return (0);
}

