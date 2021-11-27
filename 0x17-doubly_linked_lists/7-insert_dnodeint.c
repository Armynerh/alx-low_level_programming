#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at index
 * @h: Head pointer
 * @idx: Index
 * @n: Value
 *
 * Return: Node or NULL if fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *node;
	unsigned int i = 0;

	tmp = *h;

	if (h == NULL || (tmp == NULL && idx != 0))
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	while (tmp != NULL)
	{
		if (idx == i)
		{
			node->prev = tmp->prev;
			node->next = tmp;
			(tmp->prev)->next = node;
			tmp->prev = node;
			return (node);
		}
		if ((idx - 1) == i && tmp->next == NULL)
		{
			return (add_dnodeint_end(h, n));
		}
		tmp = tmp->next;
		i++;
	}
	free(node);
	return (NULL);
}
