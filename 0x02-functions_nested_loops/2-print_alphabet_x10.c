#include "holberton.h"

/**
* print_alphabet - prints all the letters of the alphabet.
*
*Return: void.
*/
void print_alphabet_x10(void)
{
	int i;
	for (i = 0; i <= 9; i++)
	{
		char letter = 'a';

		while (letter != 'z' + 1)
		{	
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
	}
}

