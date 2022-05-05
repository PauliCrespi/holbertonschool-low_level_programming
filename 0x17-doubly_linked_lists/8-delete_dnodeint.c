#include "lists.h"
/**
 *delete_dnodeint_at_index - main
 *@head: list.
 *@index : int
 *Return: int
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *check = *head;
	dlistint_t *aux = *head;
	unsigned int i = 0;

	if (check == NULL)
		return (-1);
	if (index == 0)
	{
		*head = aux->next;
		free(aux);
		if (*head)
			(*head)->prev = NULL;
		return (1);
	}
	index--;
	while (check && i != index)
	{
		check = check->next;
		i++;
	}
	if (i == index && check)
	{
		aux = check->next;
		if (aux->next)
			aux->next->prev = check;
		check->next = aux->next;
		free(aux);
		return (1);
	}

	return (-1);
}
