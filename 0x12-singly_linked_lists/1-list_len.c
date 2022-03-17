#include "lists.h"
/**
 *list_len : function
 *@h : pointer
 *Return: size
 */
size_t list_len(const list_t *h)
{
	int i = 0;
	while(h != NULL)
	{
		i++;
		h = h->next;
	}
	return(i);
}
