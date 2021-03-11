#include "variadic_functions.h"

/**
  * print_all - Prints all arguments passed to it
  * @format: the type of argument
  *
  */

void print_all(const char * const format, ...)
{
	va_list strings;
	int i = 0, num;
	float dec;
	char c;
	char *str, *separator = "";

	va_start(strings, format);

	if (format == NULL)
		return;

	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(strings, int);
				printf("%s%c", separator, c);
				break;
			case 'i':
				num = va_arg(strings, int);
				printf("%s%d", separator, num);
				break;
			case 'f':
				dec = va_arg(strings, double);
				printf("%s%f", separator, dec);
				break;
			case 's':
				str = va_arg(strings, char *);
				if (str == NULL)
					printf("%s(nil)", separator);
				else
					printf("%s%s", separator, str);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}
	va_end(strings);
	printf("\n");
}
