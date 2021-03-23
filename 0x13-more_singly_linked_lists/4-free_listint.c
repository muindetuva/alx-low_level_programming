#include "lists.h"

/**
  * free_listint - Frees a list
  * @head: The beggining of the list
  *
  */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head->next != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	free(head);
}
