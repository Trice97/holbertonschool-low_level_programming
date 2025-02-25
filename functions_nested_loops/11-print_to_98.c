#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98.
 * @n: The starting number.
 */

void print_to_98(int n)
{
	int i;

	if (n < 99)
	{
		for (i = n ; i < 99 ; i++)
		{
			printf("%d", i);
			if (i != 98)
			{	printf(",");
				printf(" ");
			}
		}
			printf("\n");
	}
	else if (n >= 99)
	{
		for (i = n ; i > 97; i--)
		{
			printf("%d", i);
			if (i != 98)
			{	printf(",");
				printf(" ");
			}
		}
			printf("\n");
	}

}
