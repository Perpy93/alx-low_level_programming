#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* print_list - prints all the elements of a singly linked list.
* @h: name of the list
* Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
	int s;

	if (h == NULL)
		return (0);

	for (s = 1; h->next != NULL; s++)
	{
		if (h->str == NULL)
			 printf("[%u] %s\n", h->len, "(nil)");
		else
			 printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	printf("[%u] %s\n", h->len, "(nil)");
	return (s);
}

