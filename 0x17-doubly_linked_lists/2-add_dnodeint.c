#include "lists.h"

/**
 *add_dnodeint - function
 *@head : double pointer
 *@n : int
 *Return: newnode address
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);
	if (n)
	{
		newnode->n = n;
        	newnode->next = *head;
        	*head = newnode;
        	return (newnode);
	}
	else
	{
		free(newnode);
		return (NULL);
	}
}
