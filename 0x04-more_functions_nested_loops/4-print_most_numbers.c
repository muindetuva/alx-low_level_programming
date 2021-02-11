#include "holberton.h"

/**
* print_most_numbers - Prints the digits of the decimal number system using
* putchar apart form 2 and 4
*
* Return: void
*/

void print_most_numbers(void)
{
	int a = 0;

	for (a = 0; a < 10; a++)
	{
		if (a == 2 || a == 4)
			continue;
		else
			_putchar(a + '0');
	}
	_putchar('\n');
}
