#include "main.h"
#include <stdlib.h>

/**
 * print_name -  function that prints a name
 * @name:Name to be printed
 * @f: Function to a pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
