#include "lists.h"
/**
 * print_list - prints all the elements of a list
 * @h: point to node
 * Return: c
 */

size_t print_list(const list_t *h)
{
	size_t c = 0;
    	if (h == NULL)
        	printf("[0] (nil)\n");

    	list_t *ptr = h;
    	while (ptr != NULL)
    	{
        	c++;
        	printf("[%lu] %s\n",ptr->len,ptr->str);
        	ptr = ptr->next;
    	}
    
    	return (c);
}
