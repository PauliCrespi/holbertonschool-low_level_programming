#include "lists.h"
/**
 *sum_listint - function
 *@head : pointer
 *Return: sum of n
 */
int sum_listint(listint_t *head)
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
