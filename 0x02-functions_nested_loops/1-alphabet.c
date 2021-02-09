#include "holberton.h"

/**
* print_alphabet - prints all the letters of the alphabet.
*
*Return: void.
*/
void print_alphabet(void)
{
	char letter = 'a';

	while (letter != 'z' + 1)
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}

