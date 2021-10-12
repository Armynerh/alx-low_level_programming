#include "lists.h"

/**
 * *add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: pointer to head element of list
 * @n: integer
 *
 * Return: The address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = NULL;

	new = malloc(sizeof(listint_t));

	if (new != NULL)
	{
		new->n = n;
		new->next = *head;
		*head = new;
	}
	else
		return (NULL);

	return (new);
}
