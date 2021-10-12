#include "lists.h"

/**
 * *reverse_listint - Reverses a list.
 * @head: pointer to head element of list
 *
 * Return: Pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *ant = NULL, *next;
	listint_t *act = *head;

	while (act != NULL)
	{
		next = act->next;
		act->next = ant;
		ant = act;
		act = next;
	}
	*head = ant;

	return (*head);
}
