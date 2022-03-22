#include "lists.h"
/**
 *listint_len - length of list
 *@h : pointer
 *Return: length
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
