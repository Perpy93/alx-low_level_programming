#include "lists.h"
/**
 * add_nodeint_end - adds node at the list end
 * @head: pointer to the head
 * @n: added data to new list
 * Return: element address
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new node;
	listint_t *temp;

	(void)temp;

	new node = malloc(sizeof(listint_t));
	if (new node == NULL)
		return (NULL);

	new node->n = n;
	new node->next = NULL;
	temp = *head;
	if (*head == NULL)
	{
		*head = new node;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new node;
	}

	return (*head);
}
