#include "lists.h"
/**
 * sum_dlistint - Write a function that returns
 * the sum of all the data (n) of a dlistint_t linked list.
 * @head: node
 * Return: return
 */
int sum_dlistint(dlistint_t *head)
{
	int i;

	i = 0;
	while (head != NULL)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}
