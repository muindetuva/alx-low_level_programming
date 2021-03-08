#include <stdlib.h>
#include <stdio.h>

/**
  * *create_array - creates an array of chars
  * @size: specifies the size of the array
  * @c: Char to initialise the array with
  *
  * Return: pointer to the array or NULL if unsuccesful
  */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (0);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
