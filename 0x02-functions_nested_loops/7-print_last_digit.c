#include "holberton.h"

/**
  * print_last_digit - prints last digit of a number
  * @n: the number being checked
  *
  * Return:the last number
  */
int print_last_digit(int n)
{
	int last;

	if (n >= 0)
		last = n % 10;
	else
	{
		last = (n % 10) * -1;
	}
	_putchar('0' + last);
	return (last);
}
