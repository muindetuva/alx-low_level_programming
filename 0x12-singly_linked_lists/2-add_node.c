#include "lists.h"

/**
  * *add_node - Adds a new node at the beggining of a new list
  * @head: Address of head
  * @str: Data to be added in new node
  *
  * Return: Address of new element
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));
	const char *s = str;

	if (ptr == NULL)
		return (NULL);

	ptr->str = strdup(s);
	ptr->len = strlen(s);
	ptr->next = NULL;

	ptr->next = *head;
	*head = ptr;

	return (*head);
}
