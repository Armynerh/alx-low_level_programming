#include "lists.h"
/**
 * delete_nodeint_at_index - delete a node at nth index
 * @head: linked list
 * @index: index to delet
 * Return: 1 if succeed, else -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *store = *head, *delet, *previous;

	if (index == 0 && store != NULL)
	{
		previous = *head;
		*head = store->next;
		free(previous);
		return (1);
	}
	if (store == NULL)
		return (-1);
	while (store != NULL)
	{
		if (i == (index - 1))
		{
			previous = store;
			store = store->next;
			delet = store;
			store = store->next;
			previous->next = store;
			free(delet);
			return (1);
		}
		store = store->next;
		i++;
	}
	return (-1);
}
