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
	if (!n)
	{
		free(newnode);
		return (NULL);
	}
	newnode->n = n;
	newnode->next = *head;
	newnode->prev = NULL;
	if (*head)
		(*head)->prev = newnode;
	*head = newnode;
	return (newnode);
}
