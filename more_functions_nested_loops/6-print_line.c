#include "main.h"
/**
 * print_line - Dessine une ligne droite dans le terminal.
 * @n: Nombre de caractères '_' à imprimer.
 */
void print_line(int n)
{
	int i;

		if (n <= 0)
	{
		_putchar('\n');
	return;
	}
		for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
		_putchar('\n');
}
