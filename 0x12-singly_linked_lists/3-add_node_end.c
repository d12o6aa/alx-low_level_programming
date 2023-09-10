#include "lists.h"
/**
 * add_node_end - Adds a new node at the end of a list
 *@head: pointer to the head of the list
 *@str: string to be added to the list
 *
 *Return: NULL in case of failure
 *or address or the element
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));
	list_t *last;
	char *s;
	int i;

	if (!ptr)
		return (NULL);

	s = strdup(str);
	if (!s)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0; s[i];)
	{
		i++;
	}
	ptr->len = i;
	ptr->str = s;
	ptr->next = NULL;
	if (*head == NULL)
		*head = ptr;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = ptr;
	}
	return (ptr);
}
