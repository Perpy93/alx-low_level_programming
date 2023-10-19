#include "lists.h"
/**
 * add_node - add node at the beginning
 * @head: node head
 * @str: string to be stored
 * Return: new element, NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	unsigned int t, count = 0;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	for (t = 0; str[t] != '\0'; t++)
		count++;
	node->len = count;
	node->next = *head;
	*head = node;

	return (*head);
}
