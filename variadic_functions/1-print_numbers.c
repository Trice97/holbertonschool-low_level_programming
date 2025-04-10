#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: Variable number of integers.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list agrs;
	unsigned int i;

	va_start(agrs, n);


	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(agrs, int));

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(agrs);
}
