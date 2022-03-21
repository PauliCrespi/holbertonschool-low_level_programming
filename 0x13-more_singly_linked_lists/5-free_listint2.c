#include "lists.h"
/**
 *free_listint2 - function
 *@head : pointer to pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *check;

	if (head != NULL)
	{
		while ((*head)->next)
		{
			check = *head;
			*head = (*head)->next;
			free(check);
		}
		free(*head);
	}
}
