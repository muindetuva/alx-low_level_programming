#include "hash_tables.h"

/**
  * hash_table_create - Creates a hash table
  * @size: The size of the array
  *
  * Return: The created hash table
  */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_node_t **arr;
	hash_table_t *new_t = malloc(sizeof(hash_table_t));

	/*Check if new_t was created succesfully */
	if (new_t == NULL || size <= 0)
		return (NULL);

	/* Initialize array to null */
	arr = malloc(sizeof(arr) * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = NULL;

	new_t->size = size;
	new_t->array = arr;

	return (new_t);
}
