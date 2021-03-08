#include <stdlib.h>
#include <stdio.h>

/**
  * _strdup - returns a pointer to a newly allocated space in memory, which
  * contains a copy of the string given as a parameter.
  * @str: pointer to string to be copied to new memory location.
  *
  * Return: pointer to new memory location on success and NULL if memory was
  * insufficient
  */

char *_strdup(char *str)
{
	int i, len;
	char *new_loc;

	if (str == NULL)
		return (NULL);
	len = 0;
	while (str[len] != '\0')
		len++;

	new_loc = malloc(sizeof(char) * (len + 1));
	if (new_loc == NULL)
		return (NULL);

	for (i = 0; i < len + 1; i++)
	{
		new_loc[i] = str[i];
	}
	return (new_loc);
}

