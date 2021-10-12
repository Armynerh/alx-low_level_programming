#include "lists.h"

/**
 * *find_listint_loop - Find the loop in a linked list.
 * @head: pointer to head element of list
 *
 * Return: Address of the node where loops starts, or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *first = head;
	listint_t *last = head;

	while (first && last && last->next)
	{
		first = first->next;
		last = last->next->next;

		if (first == last)
			return (head);
		else
			return (NULL);
	}
	return (head);
}
