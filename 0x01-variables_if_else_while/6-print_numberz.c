#include <stdlib.h>
#include <stdio.h>

/**
* main - Prints the digits of the decimal number system using putchar
*
* Return: 0 when code executes succesfully
*/

int main(void)
{
	int a = 0;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}
	putchar('\n');
	return (0);
}
