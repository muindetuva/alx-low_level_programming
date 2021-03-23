#include "lists.h"

/**
  * delete_nodeint_at_index - Inserts a node at a specified index
  * @head: The start of the list
  * @index: The index to insert at
  *
  * Return: Address of new node or NULL if it fialed
  */

listint_t delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	unsigned int i = 0;

	current = *head;
	while (current && i < idx - 1)
	{
		current = current->next;
		i++;
	}

	if (new != NULL)
	{
		if (idx == 0)
		{
			new->next = *head;
			*head = new;
			return (new);
		}
		else if (i + 1 == idx)
		{
			new->next = current->next;
			current->next  = new;
			return (new);
		}
	}
	return (NULL);
}
