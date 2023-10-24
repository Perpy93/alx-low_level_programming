#include "lists.h"
/**
 * listint_len - count the number of elements in a list
 * @h: pointer head
 * Return: number of element in the list
 */
size_t listint_len(const listint_t *h)
{
	unsigned int t;

	if (h == NULL)
		return (0);
	for (t = 0; h != NULL; t++)
	{
		h = h->next;
	}
	return (t);
}
