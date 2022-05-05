#include "lists.h"
/**
 *insert_dnodeint_at_index - main
 *@h : pointer
 *@idx : position
 *@n : int
 *Return: dlistint_t
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *check = *h;
	dlistint_t *newnode;
	unsigned int i = 0;

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	if (idx == 0)
	{
		newnode->prev = NULL;
		newnode->next = *h;
		*h = newnode;
		return (*h);
	}

	while (check && (i != (idx - 1)))
	{
		check = check->next;
		i++;
	}

	if ((i == (idx - 1)) && check)
	{
		newnode->prev = check;
		newnode->next = check->next;
		check->next = newnode;
		return (newnode);
	}

	return (NULL);
}
