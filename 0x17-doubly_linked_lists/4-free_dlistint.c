#include "lists.h"

/**
 * free_dlistint - Write a function
 * that free a dlistint_t list.
 * @head: node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
