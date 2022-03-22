#include "lists.h"
/**
 *get_nodeint_at_index - function
 *@head : pointer
 *@index : int
 *Return: the nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *check = head;

	while (i != index && check != NULL)
	{
		check = check->next;
		i++;
	}
	if (i == index)
		return (check);
	return (NULL);
}
