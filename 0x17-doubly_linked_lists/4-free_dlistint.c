#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: pointer to head node
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
