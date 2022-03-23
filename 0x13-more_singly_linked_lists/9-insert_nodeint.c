#include "lists.h"

/**
 * insert_nodeint_at_index - main
 * @head: list.
 * @idx: index
 * @n: int
 * Return: int.
 **/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *check = *head;
	listint_t *newnode;
	unsigned int i = 0;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

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

	return (NULL);
}
