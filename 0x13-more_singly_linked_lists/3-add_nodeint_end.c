#include "lists.h"
/**
 *add_nodeint_end - function
 *@head : pointer pointer
 *@n : int
 *Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *aux = *head;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;

	if (aux == NULL)
		*head = newnode;
	else
	{
	while (aux->next != NULL)
		aux = aux->next;
	aux->next = newnode;

	}
	return (newnode);
}
