#include "lists.h"

/**
 *free_list - function
 *@head : pointer
 *Return: void
 */
void free_list(list_t *head)
{
	list_t *nodex;

	while (head != NULL)
	{
		nodex = head->next;
		free(head->str);
		free(head);
		head = nodex;
	}


}
