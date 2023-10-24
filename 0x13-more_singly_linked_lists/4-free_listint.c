#include "lists.h"
/**
 * free_listint - this function frees linked list
 * @head: pointer to the first node of list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
