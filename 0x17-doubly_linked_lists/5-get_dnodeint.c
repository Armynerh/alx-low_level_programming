#include "lists.h"
/**
 * get_dnodeint_at_index - Write a function
 * that returns the nth node of a dlistint_t linked list.
 * @head: NOde
 * @index: Index
 * Return: Return
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);

}
