#include "lists.h"

/**
  * insert_dnodeint_at_index - Inserts a new node at a given position.
  * @h: Address of the head of the list
  * @idx: The index at which the node is to be added
  * @n: The data to be conatined in the new node
  *
  * Return: Address of the new node or NULL if it fails
  */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *before, *after;

	/* Create the new node */
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	before = *h;
	if (idx == 0)
	{
		new_node->next = *h;
		(*h)->prev = new_node;
		(*h) = new_node;
		return (new_node);
	}


	while (idx > 1)
	{
		if (before == NULL)
			return (NULL);
		before = before->next;
		idx--;
	}
	if (before->next == NULL)
	{
		before->next = new_node;
		new_node->prev = before;
	}
	after = before->next;
	before->next = new_node;
	after->prev = new_node;
	new_node->prev = before;
	new_node->next = after;

	return (new_node);
}
