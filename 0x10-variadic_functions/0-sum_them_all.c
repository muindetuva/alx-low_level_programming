#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
  * sum_them_all - Finds the sum of all the passed arguments
  * @n: Number of arguments passed
  *
  * Return: The sum of all the arguments
  */

int sum_them_all(const unsigned int n, ...)
{
	va_list numbers_list;
	unsigned int i;
	int sum = 0;
	
	if (n == 0)
		return (0);

	va_start(numbers_list, n);

	for (i = 0; i < n; i++)
		sum += va_arg(numbers_list, int);

	va_end(numbers_list);

	return (sum);
}
