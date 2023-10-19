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
	size_t nodes;

	nodes = 0;
	if (h == NULL)
	{
		if (h->str == NULL)
			 printf("[%d] %s\n", 0, "(nil)");
		else
			 printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nodes++;
	}
	printf("[%u] %s\n", h->len, "(nil)");
	return (nodes);
}

