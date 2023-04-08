#include "main.h"
#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it
 * @argc: prints the number of arguments passed into it
 * @argv: prints the arguments passed as string
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc);
	return (0);
}
