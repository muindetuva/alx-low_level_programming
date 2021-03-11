#include "variadic_functions.h"

/**
  * print_all - Prints all arguments passed to it
  * @format: the type of argument
  *
  */

void print_all(const char * const format, ...)
{
	va_list strings;
	int i = 0;
	char *sep = "", *str;

	va_start(strings, format);

	if (format == NULL)
		return;

	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(strings, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(strings, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(strings, double));
				break;
			case 's':
				str = va_arg(strings, char *);
				if (str == NULL)
					printf("%s(nil)", sep);
				else
					printf("%s%s", sep, str);
				break;
			default:
				i++;
				continue;
		}
		sep = ", ";
		i++;
	}
	printf("\n");
	va_end(strings);
}
