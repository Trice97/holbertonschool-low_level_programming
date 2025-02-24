#include "main.h"

/**
 *imprimmer le dernier chiffre.
*/

int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		last_digit = -(n % 10);
	}
	else
	{
		last_digit = n % 10;
	}
/*fonction qui imprime le dernier chiffre de n*/
	
	_putchar('0' + last_digit);
	return (last_digit);
}
