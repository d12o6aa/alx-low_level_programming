#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: The list_t list.
 * @str: const char
 *
 * Return:  the address of the new element.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = head;
	list_t *current = malloc(sizeof(list_t));

	current->str = str;
	current->next = NULL;

	while (ptr)
	{
		ptr = ptr->next;
	}

	ptr->next = current;

	return (current);
}
