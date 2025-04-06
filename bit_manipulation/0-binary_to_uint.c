#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - Convertit un nombre binaire en un entier non signé.
 * @b: Un pointeur vers une chaîne de caractères '0' et '1'.
 *
 * Return: Le nombre converti, ou 0 si :
 *La chaîne b contient un ou plusieurs caractères différents de '0' ou '1'.
 * - b est NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int resultat = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		resultat = (resultat << 1) | (b[i] - '0');
	}

	return (resultat);
}
