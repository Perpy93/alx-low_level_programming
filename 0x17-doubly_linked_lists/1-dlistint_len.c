#include "lists.h"

/**
 * dlistint_len - return the number of element in a 
 * double linked list
 *
 * @h: pointer to head node
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
