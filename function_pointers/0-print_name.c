#include "function_pointers.h"
#include <stdio.h>	

/**
 * print_name - Prints a name using a function pointer.
 * @name: The name to print.
 * @f: A pointer to the printing function.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
