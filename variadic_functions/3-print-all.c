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
	va_list args;
	unsigned int  i = 0, j = 0;
	char *str;
	const char *separator = "";

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				print_char(args, separator);
				break;
			case'i'
				print_int(args, separator);
				break;
			case'f':
				print_char(args, separator);
				break;
			case's':
				print_char(args, separator);
				break;
			default:
				break;
		}
		sepoarator = ", ";
		i++
	}
	printf("\n");
	va_end(args);
}
