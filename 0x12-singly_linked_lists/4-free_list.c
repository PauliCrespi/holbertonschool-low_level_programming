#include "lists.h"

/**
 *free_list - function
 *@head : pointer
 *Return: void
 */
void free_list(list_t *head)
{
	list_t *check;

	while (head != NULL)
	{
		check = head->next;
		free(head->str);
		free(head);
		head = check;
	}
}
