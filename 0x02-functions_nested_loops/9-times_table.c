#include "holberton.h"

/**
  * times_table - prints the 9 by 9 times table
  *
  * Return: void
  */

void times_table(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		k = 0;
		for (j = 0; j < 10; j++)
		{
			_putchar('0' + k);
			while (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			k = k + i
		}
		_putchar('\n');
	}
}
