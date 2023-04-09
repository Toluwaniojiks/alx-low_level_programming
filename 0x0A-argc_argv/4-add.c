#include <stdio.h>
#include <stdlib.h>

/**
*main -function that adds positive numbers
*@argc:count the number of argument passed
*@argv: print the arguments passed as string
*Return: 0 on success, 1 on failure
*/

int main(int argc, char *argv[])
{
	int count_1, count_2, sum = 0;

	for (count_1 = 1; count_1 < argc; count_1++)
	{
		for (count_2 = 0; argv[count_1][count_2] != '\0'; count_2++)
		{
			if (argv[count_1][count_2] < '0' || argv[count_1][count_2] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[count_1]);
	}

	printf("%d\n", sum);

	return (0);
}
