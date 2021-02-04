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

	while (letter !=  'z' + 1)
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
