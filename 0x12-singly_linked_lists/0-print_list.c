#include "lists.h"

/**
 * print_list - prints all elements of a list.
 * @h: pointer to head element of list
 *
 * Return: The numbers of nodes
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	for (n = 0; h != NULL; n++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	return (n);
}
