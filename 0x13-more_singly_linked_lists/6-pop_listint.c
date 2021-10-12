#include "lists.h"

/**
 * pop_listint - Deletes the head node of a list
 * @head: pointer to head element of list
 *
 * Return: Data of the head node
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (*head == NULL)
		return (0);

	tmp = (*head)->next;
	data = (*head)->n;
	free(*head);
	*head = tmp;

	return (data);
}
