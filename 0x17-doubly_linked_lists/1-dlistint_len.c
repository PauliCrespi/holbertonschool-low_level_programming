#include "lists.h"
/**
 *dlistint_len - main
 *@h : pointer
 *Return: size_t
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t i = 0;

	while (node != NULL)
	{
		i++;
		node = node->next;
	}
	return (i);
}
