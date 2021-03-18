#include "lists.h"

/**
  * print_list - Prints all tptre elements of a linked list
  * @ptr: Pointer to the head of the list
  *
  * Return: Tptre number of nodes
  */

size_t print_list(const list_t *h)
{
	int count = 0;
	const list_t *ptr = NULL;


	if (h == NULL)
		return (0);

	ptr = h;
	while (ptr != NULL)
	{
		if (ptr->str == NULL)
		{
			printf("[0] (nil)\n");
			count++;
			ptr = ptr->next;
		}
		else
		{
			printf("[%u] %s\n", ptr->len, ptr->str);
			count++;
			ptr = ptr->next;
		}
	}
	return (count);
}
