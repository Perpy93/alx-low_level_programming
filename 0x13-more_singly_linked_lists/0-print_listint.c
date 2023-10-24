#include "lists.h"
/**
 * print_listint - print the int data of a singly linked list
 *
 * @h: head pointer to the list
 * Return: number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	unsigned int t;

	if (h == NULL)
		return (0);
	for (t = 0; h != NULL; t++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (t);
}
