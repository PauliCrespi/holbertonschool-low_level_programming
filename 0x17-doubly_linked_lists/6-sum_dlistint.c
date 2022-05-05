#include "lists.h"
/**
 *sum_dlistint - main
 *@head : pointer
 *Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	unsigned int sum = 0;
	unsigned int i;

	for (i = 0; head != NULL; i++)
	{
		sum = sum + (head->n);
		head = head->next;
	}
	return (sum);
}
