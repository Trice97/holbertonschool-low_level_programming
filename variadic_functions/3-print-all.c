#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints anything, followed by a new line.
 * @format: A list of types of arguments passed to the function.
 * @...: Variable number of arguments.
 */
void print_all(const char * const format, ...)
{
	ca_list args;
	unsigned int = i = 0, j = 0;
	char *str;
	const char *separator = "";

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (j < 1)
		{
			if (format[i] == 'c')
			{
				printf("%s%c", separator, va_arg(args, int));
				break;
			}
			else if (format[i] == 'i')
			{
				printf("%s%d", separator, va_arg(args, int));
				break;
			}
			else if (format[i] == 'f')
			{
				printf("%s%d", separator, va_arg(args, double));
				break;
			}
			else if (format[i] == 's')
			{
				str = va_arg(args, char *);
					if (str == NULL)
					str = "(nil)";
					printf("%s%s", separator, str);
				break;
			}
			else
				break;
		}
	}
}
