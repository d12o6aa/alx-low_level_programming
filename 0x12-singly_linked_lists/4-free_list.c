#include "lists.h"
/**
 * free_list -  frees a list
 *@head: pointer to the head of the list
 *
 *Return: void
 *or address or the element
*/

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
