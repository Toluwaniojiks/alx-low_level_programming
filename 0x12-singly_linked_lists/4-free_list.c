#include "lists.h"

/**
 * free_list-Write a function that frees a list_t list
 * @head: pointer
 *
 * RETURN: void.
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		list_t *current = head;

		head = head->next;
		free(current->str);
		free(current);
	}
}
