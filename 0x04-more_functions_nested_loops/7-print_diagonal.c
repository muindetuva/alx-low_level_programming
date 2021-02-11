#include "holberton.h"

/**
* print_diagonal - Prints a diagonal line
*@n: number of times to print dash
*
* Return: void
*/

void print_diagonal(int n)
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
			if (n > 1)
			{
				int i;

				for (i = 0; i < a ; i++)
				{
					_putchar(' ');
				}
				_putchar('\\');
				_putchar('\n');
			}
		}
	}
}
