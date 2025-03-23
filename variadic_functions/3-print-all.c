#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - Prints a char
 * @ap: va_list containing the char to print
 */
void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_int - Prints an integer
 * @ap: va_list containing the integer to print
 */
void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_float - Prints a float
 * @ap: va_list containing the float to print
 */
void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_string - Prints a string
 * @ap: va_list containing the string to print
 */
void print_string(va_list ap)
{
	char *str = va_arg(ap, char *);

	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);
}

/**
 * print_all - Prints anything
 * @format: List of types of arguments passed to the function
 * Description: c: char, i: integer, f: float, s: char * (if NULL print (nil))
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0;
	unsigned int j;
	char *separator = "";

	printer_t printers[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{0, NULL}
	};

	va_start(ap, format);

	while (format && format[i])
	{
		j = 0;
		while (printers[j].type)
		{
			if (printers[j].type == format[i])
			{
				printf("%s", separator);
				printers[j].print(ap);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
