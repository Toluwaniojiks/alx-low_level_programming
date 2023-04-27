#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <stddef.h>

/**
 * print_list -function that prints all the elements of a list_t list.
 * @h: The list.
 *
 * Return: The number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	for (; h != NULL; h = h->next)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		nodes++;
	}
	return (nodes);
}
