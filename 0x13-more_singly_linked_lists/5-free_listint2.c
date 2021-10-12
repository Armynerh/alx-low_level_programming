#include "lists.h"

/**
 * free_listint2 - Free a list.
 * @head: pointer to head element of list
 *
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp, *store;

	if (head == NULL)
		return;

	tmp = *head;

	while (tmp != NULL)
	{
		store = tmp->next;
		free(tmp);
		tmp = store;
	}
	*head = NULL;
}
