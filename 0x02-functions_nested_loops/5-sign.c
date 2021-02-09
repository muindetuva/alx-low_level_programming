#include "holberton.h"

/**
  * print_sign - adds the sign of a number to the number
  * @n: the number being checked
  *
  * Return: 1 when positive, 0 when equal to zero & -1 when negative
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
		break;
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
		break;
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
		break;
	}
}

