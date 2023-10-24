#include "lists.h"
/**
 * free_listint2 - function that frees a linked list,
 * set the head to NULL
 * @head: points to the first element on the list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return;
	while ((*head)->next != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	free(*head);
	*head = NULL;
}
