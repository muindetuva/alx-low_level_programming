#include "holberton.h"
#include <stdio.h>

/**
  * print_to_98 - prints all numbers upto 98.
  * @n: first number
  *
  * Return: void
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
			{
				printf("%d, ", i);
			}
			else
			{
				printf("%d", i);
			}
		}
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i != 98)
			{
				printf("%d, ", i);
			}
			else
			{
				printf("%d", i);
			}
		}
	}
	else
	{
		printf("%d", n);
	}
	printf("\n");
}

