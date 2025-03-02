#include "main.h"

/**
 * puts_half - Prints half of a string, followed by a new line.
 * @str: The string to be processed.
 */
void puts_half(char *str)
{
	int length = 0;
	int start;
	int i;

/* Calculate the length of the string*/
	while (str[length] != '\0')
	{
		length++;
	}

/* Determine the starting point for printingµ*/
	if (length % 2 == 0)
	{
		start = length / 2;
	}
	else
	{
		start = (length + 1) / 2;
	}

/* Print the second half of the string*/
	for (i = start; i < length; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
