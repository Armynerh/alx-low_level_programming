#include "lists.h"

/**
 * free_listint - Free a list.
 * @head: pointer to head element of list
 *
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *tmp, *store;

	tmp = head;

	while (tmp != NULL)
	{
		store = tmp->next;
		free(tmp);
		tmp = store;
	}
}
