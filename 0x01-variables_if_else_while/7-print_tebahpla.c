#include <stdlib.h>
#include <stdio.h>

/**
* main - Prints the alphabet in reverse
*
* Return: 0 when code executes succesfully
*/

int main(void)
{
	char letter = 'z';

	while (letter !=  'a' - 1)
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
