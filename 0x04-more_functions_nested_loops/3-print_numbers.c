#include "holberton.h"

/**
* print_numbers - Prints the digits of the decimal number system using putchar
*
* Return: void
*/

void print_numbers(void)
{
	int a = 0;

	for (a = 0; a < 10; a++)
	{
		_putchar(a + '0');
	}
	_putchar('\n');
}
