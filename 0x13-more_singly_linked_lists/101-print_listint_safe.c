#include "lists.h"
#include <stdio.h>

/**
 * print_no_loop - print linked list
 * if no loop inside
 * @slow: head of linked list
 * Return: number of nodes
 */
int print_no_loop(const listint_t *slow)
{
	int i = 0;

	while (slow->next)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		i++;
		slow = slow->next;
	}
	i++;
	printf("[%p] %d\n", (void *)slow, slow->n);
	return (i);
}
/**
 * print_listint_safe - print a list
 * @head: linked list
 * Return: nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *fast = head, *slow = head;
	int i = 0, meet_node = 0, node_loop;

	if (head == NULL || head->next == NULL)
		return (i);
	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			break;
	}
	if (slow != fast)
	{
		slow = head;
		return (print_no_loop(slow));
	}
	slow = head;
	while (slow != fast)
	{
		slow = slow->next;
		fast = fast->next;
	}
	node_loop = slow->n;
	slow = head;
	meet_node = 0;
	i = 0;
	while (slow)
	{
		if (node_loop == slow->n && meet_node > 0)
			break;
		if (node_loop == slow->n)
			meet_node++;
		i++;
		printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
	}
	printf("-> [%p] %d\n", (void *)slow, slow->n);
	return (i);
}
