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
		if (*h)
			(*h)->prev = newnode;
		*h = newnode;
		return (*h);
	}
	idx--;
	while (check && i != idx)
	{
		check = check->next;
		i++;
	}
	if (i == idx && check)
	{
		newnode->prev = check;
		newnode->next = check->next;
		if (check->next)
			check->next->prev = newnode;
		check->next = newnode;
		return (newnode);
	}
	return (NULL);
}
