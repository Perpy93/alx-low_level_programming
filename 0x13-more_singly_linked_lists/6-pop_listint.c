#include "lists.h"
/**
 * pop_listint - deletes first node of a list returning
 * its data
 * @head: a pointer to list
 * Return: int n of node
 */
int pop_listint(listint_t **head)
{
	int num;
	listint_t *temp;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
