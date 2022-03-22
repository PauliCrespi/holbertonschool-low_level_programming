#include "lists.h"
/**
 *add_nodeint -  function
 *@head : pointer pointer
 *@n : int
 *Return: listint_t
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));
	int save;

	if (newnode == NULL)
		return (NULL);
	save = n;
	newnode->n = save;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
