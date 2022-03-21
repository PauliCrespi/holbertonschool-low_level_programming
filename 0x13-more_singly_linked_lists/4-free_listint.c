#include "lists.h"
/**
 *free_listint - function
 *@head : pointer
 */
void free_listint(listint_t *head)
{
	listint_t *check;

	while (head != NULL)
	{
		check = head->next;
		free(head);
		head = check;
	}
}
