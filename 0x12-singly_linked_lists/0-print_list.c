#include "lists.h"
/**
 * print_list - prints all the elements of a list
 * @h: point to node
 * Return: c
 */

size_t print_list(const list_t *h)
{
    	size_t c = 0;
    	if (h->str == "null")
    	{
        	printf("[%lu] (nil)\n",c);
    	}
        
    	list_t *ptr = h;
    	while (ptr != NULL)
    	{
        	if (ptr->str == NULL)
        	{
            		printf("[0] (nil)\n",c);
        	}
        	else
        	{
            		printf("[%d] %s\n",ptr->len,ptr->str);
        	}
        	c++;
        	ptr = ptr->next;
    	}
    
    	return (c);
}
