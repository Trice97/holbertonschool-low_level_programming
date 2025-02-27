#include "main.h"

/**
 * print_diagonal - Dessine une ligne diagonale dans le terminal.
 * @n: Nombre de caractères '\' à imprimer.
 */
void print_diagonal(int n)
{
	int i, j;

		if (n <= 0)
	{
		_putchar('\n');
		return;
	}

		for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
	{
		_putchar(' ');
	}
		_putchar('\\');
		_putchar('\n');
	}
}
