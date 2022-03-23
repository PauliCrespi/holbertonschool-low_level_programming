#include "lists.h"

/**
 * delete_nodeint_at_index - main
 * @head: list.
 * @index: index
 * Return: 1 or -1
 **/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *check = *head;
	listint_t *aux;
	unsigned int i = 0;

	if (check == NULL)
		return (-1);
	if (index == 0)
	{
		aux = *head;
		*head = aux->next;
		free(aux);
		return (1);
	}
	while (check && (i != (index - 1)))
	{
		check = check->next;
		i++;
	}
	if ((i == (index - 1)) && check)
	{
		aux = check->next;
		check->next = aux->next;
		free(aux);
		return (1);
	}

	return (-1);
}
