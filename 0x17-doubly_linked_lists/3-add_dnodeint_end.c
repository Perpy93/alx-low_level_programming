#include "lists.h"

/**
 * add_dnodeint_end - add a new node at the end of a 
 * doubly linked list
 * @head: head pointer
 * @n: value of the element
 * Return: address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *tmp;

	if (head == NULL)
		return (NULL);

	tmp = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (!*head)
	{
		*head = new_node;
		new_node->prev = NULL;
		return (new_node);
	}
	while (tmp && tmp->next)
	{
		tmp = tmp->next;
	}

	tmp->next = new_node;
	new_node->prev = tmp;

	return (new_node);
}
