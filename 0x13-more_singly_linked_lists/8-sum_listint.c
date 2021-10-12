#include "lists.h"

/**
 * sum_listint - Returns the sum of all data of a list
 * @head: pointer to head element of list
 *
 * Return: The sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp;

	tmp = head;

	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
