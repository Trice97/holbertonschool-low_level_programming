#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int nbr;

	for (nbr = 0 ; nbr < 10; nbr++)
		putchar((nbr % 10) + '0');

	printf("\n");

	return (0);
}

