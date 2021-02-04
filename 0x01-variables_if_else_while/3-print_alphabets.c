#include <stdlib.h>
#include <stdio.h>

/**
* main - Prints the alphabet
*
* Return: 0 when code executes succesfully
*/

int main(void)
{
	char letter = 'a';
	char alpha = 'A';

	while (letter !=  'z' + 1)
	{
		putchar(letter);
		letter++;
	}
	while (alpha != 'Z' + 1)
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
