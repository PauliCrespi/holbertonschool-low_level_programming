#include "lists.h"
/**
 *free_dlistint - main
 *@head : pointer
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *check;

	while (head != NULL)
	{
		check = head->next;
		free(head);
		head = check;
	}
}
