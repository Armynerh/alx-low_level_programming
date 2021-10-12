#include "lists.h"

/**
 * *add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to head element of list
 * @n: integer
 *
 * Return: The address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = NULL, *tmp = *head;

	new = malloc(sizeof(listint_t));

	if (new != NULL)
	{
		new->n = n;
		new->next = NULL;
	}
	else
		return (NULL);

	if (*head == NULL)
		*head = new;
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new;
	}
	return (new);
}
