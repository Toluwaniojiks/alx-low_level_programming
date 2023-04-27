#include "lists.h"

/**
 * list_len - function that returns the number of element
 * in a linked list_t list.
 * @h:pointer
 *
 * Return:(0) on success.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	for (count = 0; h != NULL; count++)
	{
		h = h->next;
	}
	return (count);
}
