#include "holberton.h"

/**
  * print_sign - adds the sign of a number to the number
  * @n: the number being checked
  *
  * Return: 1 when positive, 0 when equal to zero & -1 when negative
  */
int print_sign(int n)
{
	int ret;

	if (n > 0)
	{
		_putchar('+');
		ret = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		ret = 0;
	}
	else if (n < 0)
	{
		_putchar('-');
		ret = -1;
	}
	return (ret);
}

