#include "variadic_functions.h"

/**
  * print_numbers - Print numbers passed to the function with their separator
  * @separator: The separator between the numbers
  * @n: Number of numbers to be printed
  *
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers_list;
	unsigned int i;

	if (separator == NULL)
		separator = "";
	if (n == 0)
		return;

	va_start(numbers_list, n);

	for (i = 0; i < n - 1; i++)
		printf("%d%s", va_arg(numbers_list, int), separator);
	printf("%d\n", va_arg(numbers_list, int));

	va_end(numbers_list);
}
