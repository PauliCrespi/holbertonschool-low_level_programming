#include "lists.h"

/**
 *print_list - function
 *@h : pointer
 *Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0](nil)\n");
		}
		if (h->str != NULL)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		i++;
		h = h->next;

	}
	return (i);
}
