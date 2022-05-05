#include "lists.h"
/**
 *add_dnodeint_end - main
 *@head : double pointer
 *@n : int
 *Return: newnode
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *last = *head;

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	if (!n)
	{
		free(newnode);
		return (NULL);
	}

	newnode->n = n;
	newnode->next = NULL;

	if (last == NULL)
		*head = newnode;
	else
	{
		while (last->next != NULL)
			last = last->next;
		last->next = newnode;
	}

	return (newnode);
}
