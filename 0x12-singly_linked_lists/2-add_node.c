#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to the head of the list
 * @str: string to be added
 *
 * Return: returns the address to the new element or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));
	char *s;
	int i;

	if (!ptr)
		return (NULL);

	s = strdup(str);
	if (!s)
	{
		free(s);
		return (NULL);
	}

	for (i = 0; s[i];)
	{
		i++;
	}
	ptr->str = s;
	ptr->len = i;
	ptr->next = *head;

	*head = ptr;
	return (ptr);
}
