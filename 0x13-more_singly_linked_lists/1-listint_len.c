#include "lists.h"

/**
 * listint_len - returns the number of elements in a lnked list.
 * @h: pointer to head element of list
 *
 * Return: Numbers of elements of list
 */

size_t listint_len(const listint_t *h)
{
	int num;

	if (h == NULL)
		return (0);

	for (num = 0; h != NULL; num++)
	{
		h = h->next;
	}
	return (num);
}
