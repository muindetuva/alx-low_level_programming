#include "holberton.h"

/**
* print_line - Prints a line
*@n: number of times to print dash
*
* Return: void
*/

void print_line(int n)
{
	int a = 0;

	if (n < 0 || n == 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < n; a++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
