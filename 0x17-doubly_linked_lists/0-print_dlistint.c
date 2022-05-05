#include "lists.h"

/**
 *print_dlistint - main
 *@h : list
 *Return: size_t
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t i = 0;

	while (node != NULL)
	{
		printf("%i\n", node->n);
		i++;
		node = node->next;
	}
	return (i);
}
