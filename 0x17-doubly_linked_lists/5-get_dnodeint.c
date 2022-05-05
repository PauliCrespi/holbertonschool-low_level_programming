#include "lists.h"
/**
 *get_dnodeint_at_index - main
 *@head : pointer
 *@index : int
 *Return: dlistint_t
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *check = head;

	while (i != index && check)
	{
		i++;
		check = check->next;
	}
	if (i == index && check)
		return (check);
	return (NULL);
}
