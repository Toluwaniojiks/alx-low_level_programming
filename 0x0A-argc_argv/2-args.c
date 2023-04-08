#include "main.h"
#include <stdio.h>

/**
 * main - program that prints all arguments it receives
 * @argc: count the number of argurment passed
 * @argv: prints argurment passed as string
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
