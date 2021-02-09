#include "holberton.h"

/**
* print_alphabet_x10 - prints all the letters of the alphabet 10 times.
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
