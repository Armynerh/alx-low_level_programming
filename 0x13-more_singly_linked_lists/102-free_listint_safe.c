#include "lists.h"
#include <stdio.h>

/**
 * free_no_loop - free linked list
 * if no loop inside
 * @slow: head of linked list
 * Return: number of nodes
 */
int free_no_loop(listint_t *slow)
{
	int i = 0;
	listint_t *tmp;

	while (slow != NULL)
	{
		tmp = slow;
		slow = slow->next;
		free(tmp);
		i++;
	}
	return (i);
}
/**
 * free_listint_safe - free a linked list
 * @h: linked list
 * Return: number of nodes deleted
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp, *start_loop, *fast = *h, *slow = *h;
	int i = 0, seen = 0;

	if (h == NULL)
		return (0);
	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			slow = *h;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			start_loop = slow; /* store adress of start loop to compare*/
			slow = *h;
			i++;
			while (!(seen == 2))
			{
				i++;
				tmp = slow;
				slow = slow->next;
				if (slow == start_loop)
					seen++;
				free(tmp);
			}
			*h = NULL;
			i -= 1;
			return (i);
		}
	}
	slow = *h;
	*h = NULL;
	return (free_no_loop(slow));
}
