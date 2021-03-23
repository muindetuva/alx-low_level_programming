#include "lists.h"

/**
  * free_listint2 - Frees a list
  * @head: The beggining of the list
  *
  */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
	}
	*head = NULL;
}
