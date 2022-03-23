#include "lists.h"
/**
 *insert_nodeint_at_index - function
 *@head : pointer pointer
 *@idx : unsigned int
 *@n : int
 *Return: listint_t
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newnode;
	listint_t *check = *head;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (*head);
	}
	while (check && (i != (idx - 1)))
	{
		check = check->next;
		i++;
	}
	if ((i == (idx - 1)) && check)
	{
		newnode->next = check->next;
		check->next = newnode;
		return (newnode);
	}
	else
	{
		return (NULL);
	}
}
