#include "holberton.h"

/**
  * puts2 - prints one character and skips the next in a string
  * @str: string to be printed
  *
  * Returns: void.
  */

void puts2(char *str)
{
	int len = 0;
	int i = 0;

	while (str[len] != '\0')
		len++;

	while (i < len)
	{
		_putchar(str[i]);
		i = i + 2;
	}

	_putchar('\n');
}
