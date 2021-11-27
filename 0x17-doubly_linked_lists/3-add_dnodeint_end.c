#include "lists.h"

/**
 * add_dnodeint_end - Write a function that adds a
 * new node at the end of a dlistint_t list.
 * @head: Node
 * @n: Count
 * Return: node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head != NULL)
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
		new->prev = tmp;
	}
	else
	{
		new->prev = NULL;
		*head = new;
	}
	return (new);
}
