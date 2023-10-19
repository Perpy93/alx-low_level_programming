#include "lists.h"
/**
 * list_len - length of list
 * @h: pointer to the first node
 * Return: number of nodes in list
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
