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

	if (h == NULL)
	{
		return (count);
	}
	const list_t *current = h;

	do {
		count++;
		current = current->next;
	} while (current != NULL);
	return (count);
}
