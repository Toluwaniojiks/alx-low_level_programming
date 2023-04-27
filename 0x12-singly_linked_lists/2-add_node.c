#include "lists.h"
#include <string.h>

/**
 * add_node- function that adds a new node at the beginning of a list_t list
 * @head: pointerto another pointer
 * @str: string to be duplicated
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *str_2;
	int len;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	str_2 = strdup(str);

	if (str_2 == NULL)
	{
		free(new_node);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;
	new_node->str = str_2;
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
