#include "main.h"
#include <stdio.h>

/**
 * main -program that prints its name, followed by a new line
 * @argc: count the number of argurment passed
 * @argv: prints argurment passed as string
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
